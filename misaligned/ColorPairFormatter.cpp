#include "ColorPairFormatter.h"
#include <iomanip>
#include <sstream>
#include "ColorPairs.h"

std::string ColorPairFormatter::formatColorMap() {
    std::stringstream ss;

    unsigned int i = 0, j = 0;
    for (i = 0; i < numberOfMajorColors; i++) {
        for (j = 0; j < numberOfMinorColors; j++) {
            ss << std::setw(3) << getColorPairNumber(i, j) << " | ";
            ss << std::setw(7) << majorColor[i] << " | ";
            ss << std::setw(7) << minorColor[j] << "\n";
        }
    }
    return ss.str();
}

int ColorPairFormatter::getColorPairNumber(int majColorIndex, int minorColorIndex) {
    return (majColorIndex * numberOfMinorColors) + (minorColorIndex+1);
}
