#pragma once
#include <string>

class ColorPairFormatter
{
public:
    static std::string formatColorMap();
    static int getColorPairNumber(int majColorIndex, int minorColorIndex);
};
