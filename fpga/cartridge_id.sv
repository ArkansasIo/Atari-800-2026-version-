module cartridge_id (
    input logic clk,
    input logic rst_n,
    output logic [31:0] vendor_id,
    output logic [31:0] device_id,
    output logic [31:0] firmware_version
);
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            vendor_id <= 32'h4154_4152;
            device_id <= 32'h3830_3236;
            firmware_version <= 32'h0001_0000;
        end
    end
endmodule
