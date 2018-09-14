#include "pxt.h"
//#include "MicroBit.h"
#include "MicroBitDisplay.h"
//#include "MicroBitI2C.h"
#include "mbed.h"

//MicroBitI2C i2c(I2C_SDA0, I2C_SCL0);
MicroBitDisplay display;

using namespace pxt;
namespace banana {
#define BANANA_MULTIPLIER 2

    //%
    int banana_multipler(int bananas) {
        return bananas * BANANA_MULTIPLIER;
    }

    //%
    int banana_multiply(int bananas, int multiplier) {
        return bananas * multiplier;
    }

    //%
    void print_display() {
        display.scroll(":)");
    }

    //%
    void get_tempc() {
        display.scroll("tempC");
     }
}