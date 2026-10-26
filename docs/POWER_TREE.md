# Power Tree

24 V DC input
|
+-- Input protection / fuse / reverse-polarity protection
|
+-- 24 V switched main rail
|
+-- GPU power stages
+-- CPU/SoC VRM
+-- DDR5/LPDDR5 rails
+-- 12 V fan rail
+-- 5 V USB/storage rail
+-- 3.3 V digital rail
+-- low-voltage rails required by selected silicon
|
+-- EC/MCU always-on rail

## Production requirements

- TVS protection
- Inrush limiting
- Current monitoring
- UVLO/OVP/OTP
- Sequenced rails
- Hardware emergency shutdown
- Per-cartridge current limiting
