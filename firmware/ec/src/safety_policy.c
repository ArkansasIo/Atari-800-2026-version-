#include <stdint.h>

/* Returns non-zero when the system should enter thermal protection. */
int ec_thermal_trip(uint16_t cpu_c,
                    uint16_t gpu_c,
                    uint16_t vrm_c,
                    uint16_t cart_a_c,
                    uint16_t cart_b_c) {
    const uint16_t CPU_LIMIT = 95;
    const uint16_t GPU_LIMIT = 95;
    const uint16_t VRM_LIMIT = 105;
    const uint16_t CART_LIMIT = 85;

    return cpu_c >= CPU_LIMIT ||
           gpu_c >= GPU_LIMIT ||
           vrm_c >= VRM_LIMIT ||
           cart_a_c >= CART_LIMIT ||
           cart_b_c >= CART_LIMIT;
}

/* Returns non-zero when a cartridge should be power-disabled. */
int cartridge_overtemp(uint16_t temperature_c) {
    return temperature_c >= 85;
}
