#pragma once
#include <cstdint>
#include <string>

struct CartridgeInfo {
    std::string vendor;
    std::string device;
    std::uint32_t firmware;
    std::uint64_t capacity_tb;
};

CartridgeInfo identify_cartridge(int slot);
