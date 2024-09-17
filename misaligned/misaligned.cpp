#include "ColorPairPrinter.h"
#include "ColorPairs.h"
#include "ColorPairTests.h"

const char* majorColor[] = { "White", "Red", "Black", "Yellow", "Violet" };
const char* minorColor[] = { "Blue", "Orange", "Green", "Brown", "Slate" };

unsigned int numberOfMajorColors = sizeof(majorColor) / sizeof(majorColor[0]);
unsigned int numberOfMinorColors = sizeof(minorColor) / sizeof(minorColor[0]);


int main() {
    ColorPairPrinter::printColorMap();
    ColorPairTests::testNumberOfPairs();
    ColorPairTests::testMinorColorRepeatedInConsecutiveLines();
    ColorPairTests::testColorNumberRepeated();
    return 0;
}
