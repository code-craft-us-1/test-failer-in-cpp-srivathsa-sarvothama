#include "ColorPairPrinter.h"
#include <iostream>
#include "ColorPairFormatter.h"
#include <string>

void ColorPairPrinter::printColorMap() {
    std::string result = ColorPairFormatter::formatColorMap();
    std::cout << result;
}
