#include "pxt.h"
#include "MicroBitDisplay.h"
#include "mbed.h"
#include "MicroBitI2C.h"

MicroBitDisplay leds;
MicroBitI2C xi2c;

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
        leds.scroll(":)");
    }

    //%
    void get_tempc() {
        leds.scroll("tempC");
     }
}