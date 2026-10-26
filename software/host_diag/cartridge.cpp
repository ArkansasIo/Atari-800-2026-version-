#include "cartridge.hpp"

CartridgeInfo identify_cartridge(int slot) {
    CartridgeInfo info;
    info.vendor = "ATARI";
    info.device = slot == 0 ? "A800-CART-A" : "A800-CART-B";
    info.firmware = 0x00010000;
    info.capacity_tb = 128;
    return info;
}
