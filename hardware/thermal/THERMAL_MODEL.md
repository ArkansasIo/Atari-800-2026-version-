# Thermal Model

## Initial design target

Nominal system dissipation: 200-300 W.

Maximum design input: 400 W from the 24 V external supply.

## Cooling architecture

- Two low-noise PWM-controlled fans
- CPU heatpipe/heatsink assembly
- GPU heatpipe/heatsink assembly
- VRM heatsinks
- M.2 thermal spreader
- Cartridge airflow path
- Temperature sensors at CPU, GPU, VRM, SSD and both cartridge slots

## Control policy

| Temperature | Fan target |
|---|---:|
| <45 C | 20% |
| 45-59 C | 35% |
| 60-69 C | 55% |
| 70-79 C | 75% |
| >=80 C | 100% |

The thresholds are initial firmware defaults only. Final limits must come from the selected CPU, GPU, VRM, SSD and cartridge components.

## Validation

Thermal validation must include sustained CPU load, GPU load, simultaneous cartridge activity, NVMe activity, maximum ambient temperature and restricted-airflow tests.
