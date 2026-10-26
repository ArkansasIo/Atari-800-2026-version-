# Cartridge Electrical Specification

## Concept

Two removable expansion cartridges. The illustrated 128 TB figure is treated as storage capacity, not RAM.

## Proposed signals

- High-speed host link: PCIe-class differential lanes
- Reference clock
- Reset
- Presence detect
- Power-good
- I2C/SMBus management
- SPI recovery/configuration interface
- 3.3 V protected auxiliary power
- Ground shielding contacts

## Slot safety

1. Detect cartridge before enabling full power.
2. Apply current-limited auxiliary power.
3. Read identification EEPROM/FPGA registers.
4. Validate firmware and device capabilities.
5. Enable high-speed link.
6. Monitor temperature and current.
7. Disable slot on over-current, over-temperature or link fault.

## Mechanical

The connector and card-edge geometry must be defined from a mechanical CAD model before PCB layout. Contact plating, insertion cycles, retention force and hot-plug requirements must be specified with the connector manufacturer.
