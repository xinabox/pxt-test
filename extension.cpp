#include "pxt.h"
#include "MicroBit.h"

MicroBitI2C i2c = MicroBitI2C(I2C_SDA0, I2C_SCL0);

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

    //%
    int32_t getTempC_() {
        uint16_t data = i2c.read(0x48, 0x00, 2);
        int32_t tempC = (data >> 5) * 0.125;
        return tempC;
    }
}