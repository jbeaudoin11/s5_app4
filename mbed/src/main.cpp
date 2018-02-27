#include <cmath>

#include "mbed.h"

AnalogIn data(p18);

double height() {
    double value = (double) data * 3.3;
    return
        +0.2752*pow(value, 5)
        -2.2587*pow(value, 4)
        +7.0954*pow(value, 3)
        -10.7507*pow(value, 2)
        +9.1581*value
        -2.748
    ;
    // return
    //     -0.2752*pow(value, 5)
    //     +2.2587*pow(value, 4)
    //     -7.0954*pow(value, 3)
    //     +10.7507*pow(value, 2)
    //     -9.1581*value
    //     +4.748
    // ;
}


int main() {
    while(1) {
        printf("%0.2fV -- %0.2fcm\n\r", (float) data * 3.3f, height());

        wait_ms(500);
    }
    
    return 0;
}