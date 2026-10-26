# Cartridge Controller Protocol

The cartridge controller is an FPGA-managed expansion endpoint.

## Logical layers

1. Physical link — PCIe or another selected high-speed link.
2. Transport — framed command/data packets.
3. Storage — block-storage abstraction.
4. Management — identification, firmware version, temperature and health.
5. Security — signed firmware and optional encrypted content.

## Command types

- 0x01 IDENTIFY
- 0x02 READ
- 0x03 WRITE
- 0x04 STATUS
- 0x05 TEMPERATURE
- 0x06 RESET
- 0x07 FIRMWARE_INFO

## Frame

    SYNC | VERSION | TYPE | FLAGS | LENGTH | SEQ | PAYLOAD | CRC32

The protocol is versioned so the FPGA implementation can evolve independently of the physical cartridge connector.
