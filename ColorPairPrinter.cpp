#include "ColorPairPrinter.h"
#include <iostream>
#include "ColorPairFormatter.h"

void ColorPairPrinter::printColorMap()
{
    std::string result = ColorPairFormatter::formatColorMap();
    std::cout << result;
}
