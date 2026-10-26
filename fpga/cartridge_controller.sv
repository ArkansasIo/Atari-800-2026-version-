module cartridge_controller #(
    parameter int ADDR_WIDTH = 32,
    parameter int DATA_WIDTH = 32
) (
    input  logic clk,
    input  logic rst_n,
    input  logic [ADDR_WIDTH-1:0] host_addr,
    input  logic [DATA_WIDTH-1:0] host_wdata,
    input  logic host_write,
    input  logic host_read,
    output logic [DATA_WIDTH-1:0] host_rdata,
    output logic host_ready,
    output logic storage_read,
    output logic storage_write,
    output logic [ADDR_WIDTH-1:0] storage_addr,
    output logic [DATA_WIDTH-1:0] storage_wdata,
    input logic [DATA_WIDTH-1:0] storage_rdata,
    input logic storage_ready
);

    logic [7:0] command_reg;
    logic [31:0] status_reg;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            command_reg <= 8'h00;
            status_reg <= 32'h0000_0001;
            host_rdata <= '0;
            host_ready <= 1'b0;
            storage_read <= 1'b0;
            storage_write <= 1'b0;
            storage_addr <= '0;
            storage_wdata <= '0;
        end else begin
            host_ready <= 1'b0;
            storage_read <= 1'b0;
            storage_write <= 1'b0;
            if (host_write) begin
                if (host_addr == 32'h0000_0000)
                    command_reg <= host_wdata[7:0];
                if (host_addr == 32'h0000_0010) begin
                    storage_addr <= host_addr;
                    storage_wdata <= host_wdata;
                    storage_write <= 1'b1;
                end
                host_ready <= 1'b1;
            end
            if (host_read) begin
                case (host_addr)
                    32'h0000_0000: host_rdata <= {24'h0, command_reg};
                    32'h0000_0004: host_rdata <= status_reg;
                    32'h0000_0010: begin
                        storage_addr <= host_addr;
                        storage_read <= 1'b1;
                        host_rdata <= storage_rdata;
                    end
                    default: host_rdata <= 32'h0;
                endcase
                host_ready <= storage_ready || (host_addr != 32'h0000_0010);
            end
        end
    end
endmodule
