#include <cassert>
#include <iostream>

int main() {
    constexpr int cartridge_slots = 2;
    constexpr int chassis_length_mm = 330;
    constexpr int chassis_width_mm = 280;

    assert(cartridge_slots == 2);
    assert(chassis_length_mm > 300);
    assert(chassis_width_mm > 250);

    std::cout << "ATARI 800 2026 configuration sanity test: PASS\n";
    return 0;
}
