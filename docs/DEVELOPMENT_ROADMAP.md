# Atari 800 2026 Development Roadmap

## Phase 1 — Architecture

- [x] System block diagram
- [x] Board configuration
- [x] Initial power tree
- [x] Cartridge concept
- [x] Host diagnostic scaffold
- [x] FPGA controller scaffold

## Phase 2 — Electrical definition

- [x] Preliminary BOM
- [x] Interface matrix
- [x] Power budget
- [x] Thermal model
- [ ] Select production CPU/SoC
- [ ] Select GPU
- [ ] Select FPGA
- [ ] Select Ethernet PHY/controller
- [ ] Select USB4 solution
- [ ] Select PMIC/VRMs
- [ ] Freeze memory topology

## Phase 3 — PCB

- [ ] Create KiCad project
- [ ] Create full hierarchical schematic
- [ ] Define stackup
- [ ] Assign impedance targets
- [ ] Place major components
- [ ] Route memory
- [ ] Route PCIe
- [ ] Route USB4
- [ ] Route HDMI/DP
- [ ] Route Ethernet
- [ ] Complete power planes
- [ ] DRC
- [ ] ERC

## Phase 4 — FPGA / firmware

- [ ] PCIe endpoint implementation
- [ ] Cartridge management registers
- [ ] Storage bridge
- [ ] Cartridge security
- [ ] EC board bring-up firmware
- [ ] Fan control
- [ ] Thermal protection
- [ ] Keyboard controller

## Phase 5 — Prototype

- [ ] Prototype PCB
- [ ] Bring-up fixture
- [ ] Power-only bring-up
- [ ] EC bring-up
- [ ] SoC boot
- [ ] Memory validation
- [ ] PCIe validation
- [ ] Cartridge validation
- [ ] GPU validation
- [ ] Network validation
- [ ] Display validation

## Phase 6 — Certification / production

- [ ] SI/PI signoff
- [ ] Thermal signoff
- [ ] EMC pre-compliance
- [ ] Regulatory certification
- [ ] Manufacturing test procedure
- [ ] Factory programming procedure
- [ ] Production BOM freeze
