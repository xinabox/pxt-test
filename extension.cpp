#include "pxt.h"
#include "MicroBit.h"

MicroBitI2C uI2C;

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
}