#include "pxt.h"
#include "MicroBitDisplay.h"
#include "MicroBitI2C.h"
#include "mbed.h"

MicroBitDisplay leds;

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