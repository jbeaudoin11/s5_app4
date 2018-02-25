#include "mbed.h"

AnalogIn data(p18);

int main() {
    while(1) {
        printf("%0.2f\n\r", (float) data * 3.3);

        wait_ms(500);
    }
    
    return 0;
}