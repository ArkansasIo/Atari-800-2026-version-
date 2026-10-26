#include "ec.h"

static ec_telemetry_t telemetry;

void ec_init(void) {
    telemetry = (ec_telemetry_t){0};
}

void ec_poll(void) {
    /* Hardware-specific ADC/I2C/SMBus reads go here. */
}

void ec_set_fan_pwm(uint8_t channel, uint8_t duty) {
    (void)channel;
    (void)duty;
    /* Hardware PWM implementation goes here. */
}

void ec_read_telemetry(ec_telemetry_t *out) {
    if (out) *out = telemetry;
}
