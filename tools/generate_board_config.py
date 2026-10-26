#!/usr/bin/env python3
"""Print a compact engineering summary from board.json."""

import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
cfg = json.loads((ROOT / "config" / "board.json").read_text())

print(f"Project: {cfg['project']} {cfg['revision']}")
print(f"Chassis: {cfg['chassis_mm']['length']} x {cfg['chassis_mm']['width']} x {cfg['chassis_mm']['height']} mm")
print(f"CPU: {cfg['compute']['cpu_selection']}")
print(f"GPU: {cfg['compute']['gpu_selection']}")
print(f"RAM: {cfg['memory']['capacity_gb']} GB")
print(f"Cartridge slots: {cfg['cartridge']['slots']}")
print(f"Cartridge capacity/slot: {cfg['storage']['cartridge_storage_per_slot_tb']} TB")
