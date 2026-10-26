# System Architecture

```text
                         +----------------------+
                         |      ARM64 SoC       |
                         | CPU / Memory Control |
                         +----------+-----------+
                                    |
                    +---------------+----------------+
                    |                                |
              +-----v-----+                    +-----v------+
              | DDR5/LP5  |                    | PCIe Root  |
              +-----------+                    +------+-----+
                                                     |
                      +------------------------------+----------------+
                      |                              |                |
                 +----v----+                    +----v----+      +----v----+
                 | NVMe    |                    | GPU     |      | FPGA A/B |
                 | SSD     |                    | dGPU    |      | Cartridge|
                 +---------+                    +---------+      +----+-----+
                                                                       |
                                                            +----------+----------+
                                                            | Removable Storage  |
                                                            | / Expansion Module |
                                                            +---------------------+

 +-------------+      +----------------+      +----------------------+
 | Wi-Fi 7/BT  |------| I/O Controller |------| USB / HDMI / DP / LAN|
 +-------------+      +----------------+      +----------------------+
                              |
                       +------v------+
                       | MCU / EC    |
                       | Power/Fans  |
                       | Keyboard    |
                       +-------------+
```

## Major subsystems

- ARM64 host compute platform
- DDR5/LPDDR5 system memory
- Discrete PCIe GPU
- M.2 NVMe storage
- Two FPGA cartridge controllers
- Modern Ethernet and wireless networking
- Display and USB I/O
- Embedded controller for power, thermal and keyboard functions
