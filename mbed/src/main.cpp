#include <cmath>

#include "mbed.h"

AnalogIn data(p18);

float height() {
    float value = (float) data * 3.3f;
    return
        -0.2752*pow(value, 5)
        +2.2587*pow(value, 4)
        -7.0954*pow(value, 3)
        +10.7507*pow(value, 2)
        -9.1581*pow(value, 1)
        -4.748
    ;
}


int main() {
    while(1) {
        printf("%0.2f\n\r", height());

        wait_ms(500);
    }
    
    return 0;
}