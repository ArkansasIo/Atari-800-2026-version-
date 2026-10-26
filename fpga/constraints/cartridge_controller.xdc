# Generic FPGA constraint template.
# Replace PACKAGE_PIN and IOSTANDARD values with the selected FPGA vendor's package data.

# create_clock -period 10.000 [get_ports clk]
# set_property PACKAGE_PIN <PIN> [get_ports clk]
# set_property IOSTANDARD LVCMOS33 [get_ports clk]

# Example management I/O placeholders:
# set_property PACKAGE_PIN <PIN> [get_ports rst_n]
# set_property IOSTANDARD LVCMOS33 [get_ports rst_n]

# High-speed PCIe lane constraints must be generated from the selected FPGA
# transceiver architecture and vendor reference design. Do not use guessed pins.
