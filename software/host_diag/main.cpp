#include "cartridge.hpp"
#include <iomanip>
#include <iostream>

int main() {
    std::cout << "ATARI 800 2026 host diagnostic\n";
    std::cout << "Architecture: ARM64 + discrete GPU\n";
    std::cout << "Internal storage: M.2 NVMe\n";

    for (int slot = 0; slot < 2; ++slot) {
        auto c = identify_cartridge(slot);
        std::cout << "Cartridge " << char('A' + slot)
                  << ": " << c.vendor << " " << c.device
                  << ", " << c.capacity_tb << " TB, FW 0x"
                  << std::hex << c.firmware << std::dec << "\n";
    }
    return 0;
}
