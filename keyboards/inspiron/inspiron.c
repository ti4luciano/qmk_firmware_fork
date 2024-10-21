#include "quantum.h"

void keyboard_pre_init_kb(void) {
	setPinOutput(C13);
    writePinLow(C13);
    wait_ms(400);
    writePinHigh(C13);
}

void backlight_init_ports(void) {
	setPinOutput(A3);
    writePinLow(A3);
}

void backlight_set(uint8_t level) {
    if ( level == 0 ) {
        // Turn off light
        writePinHigh(A3);
    } else {
        // Turn on light
        writePinLow(A3);
    }
}
