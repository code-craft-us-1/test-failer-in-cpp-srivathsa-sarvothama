#include <assert.h>
#include <iostream>

#include "TShirtsTests.h"
#include "TShirtSize.h"

void TShirtsTests::testTShirtSizes() {
    int minShoulderLengthToTest = 35;
    int maxShoulderLengthToTest = 45;

    for(int i = minShoulderLengthToTest; i <= maxShoulderLengthToTest; i++) {
        assert(TShirtSize::getTShirtSize(i) != TShirtSizeEnum::INVALID);
    }
}
