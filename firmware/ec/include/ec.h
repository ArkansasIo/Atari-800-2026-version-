#pragma once
#include <stdint.h>

typedef struct {
    uint16_t cpu_c;
    uint16_t gpu_c;
    uint16_t vrm_c;
    uint16_t ssd_c;
    uint16_t cart_a_c;
    uint16_t cart_b_c;
} ec_telemetry_t;

void ec_init(void);
void ec_poll(void);
void ec_set_fan_pwm(uint8_t channel, uint8_t duty);
void ec_read_telemetry(ec_telemetry_t *out);
