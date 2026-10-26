# Atari 800 2026 Motherboard Specification

## Target

Custom motherboard for the modern Atari 800 chassis concept.

## Board envelope

- Target PCB envelope: approximately 300 x 230 mm
- Chassis envelope: approximately 330 x 280 x 60 mm
- PCB: 8-layer minimum for PCIe/USB4/10GbE-class routing; 10-layer preferred if routing density requires it
- Copper: 1 oz signal layers; heavier copper for high-current power layers where required
- Finish: ENIG recommended

## Layer proposal

| Layer | Function |
|---|---|
| L1 | Components / high-speed signals |
| L2 | Solid ground |
| L3 | High-speed signals |
| L4 | Power |
| L5 | High-speed / memory signals |
| L6 | Solid ground |
| L7 | Low-speed / power signals |
| L8 | Components / signals |

Final stackup must be supplied by the PCB fabricator and impedance-controlled from their actual dielectric data.

## Major blocks

1. ARM64 compute module or SoC
2. DDR5/LPDDR5 memory subsystem
3. PCIe root complex
4. Discrete GPU connector/interface
5. M.2 NVMe slot
6. FPGA cartridge controller A
7. FPGA cartridge controller B
8. 10GbE/2.5GbE Ethernet subsystem
9. Wi-Fi 7/Bluetooth module
10. USB 3.x / USB4 subsystem
11. HDMI 2.1 / DisplayPort subsystem
12. Embedded controller
13. Power-management subsystem
14. Fan and temperature monitoring
15. Keyboard / front-panel I/O

## Design rules

- Treat every PCIe/USB4/HDMI differential pair as impedance-controlled.
- Match differential-pair lengths according to the selected silicon vendor's layout guide.
- Keep reference planes continuous under high-speed pairs.
- Avoid vias in high-speed pairs unless the stackup and via geometry have been simulated.
- Keep switching regulator nodes physically compact.
- Separate noisy power conversion regions from RF and analog sections.
- Provide test points for every major power rail.
- Provide a debug header for EC and FPGA recovery.
