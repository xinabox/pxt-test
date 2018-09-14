#include "pxt.h"
#include "MicroBit.h"

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
        uBit.display.scroll(":)");
    }

    // int getTempC_() {
    //     int data;
    //     uBit.i2c.write(0x48, 0x00, 1)
    //     uBit.i2c.read(0x48, data, 2);
    //     int tempC = (data >> 5) * 0.125;
    //     return tempC;
    // }
}