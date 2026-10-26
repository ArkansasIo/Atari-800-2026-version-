# Hardware Source

Recommended CAD implementation:

- KiCad 9.x or later
- 4–12 layer motherboard depending on final interfaces
- controlled impedance for PCIe, USB4, HDMI and 10GbE
- dedicated power/ground planes
- thermal vias beneath high-power devices
- RF keep-outs around antennas
- vendor reference layouts for high-speed controllers

The final schematic should be derived from `config/board.json`, `hardware/netlist/board_nets.csv`, and the interface documents under `docs/`.
