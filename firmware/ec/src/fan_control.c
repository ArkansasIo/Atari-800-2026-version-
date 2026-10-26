#include <stdint.h>

static uint8_t clamp_u8(int value) {
    if (value < 0) return 0;
    if (value > 100) return 100;
    return (uint8_t)value;
}

uint8_t fan_curve(uint16_t temp_c) {
    if (temp_c < 45) return 20;
    if (temp_c < 60) return 35;
    if (temp_c < 70) return 55;
    if (temp_c < 80) return 75;
    return clamp_u8(100);
}
