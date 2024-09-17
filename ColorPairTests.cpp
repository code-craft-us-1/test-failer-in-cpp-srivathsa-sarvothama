#include "ColorPairTests.h"
#include "ColorPairFormatter.h"
#include "ColorPairs.h"
#include <cassert>
#include <vector>
#include <sstream>
#include <string>

void ColorPairTests::testMinorColorRepeatedInConsecutiveLines() {
    std::istringstream stream(ColorPairFormatter::formatColorMap());
    std::string line, prev = "";
    while (std::getline(stream, line)) {
        const char delimiter = '|';
        size_t pos = line.rfind(delimiter);

        if (pos != std::string::npos) {
            std::string minorColor = line.substr(pos + 1);
            assert(minorColor != prev);
            prev = minorColor;
        }
    }
}

void ColorPairTests::testColorNumberRepeated() {
    std::istringstream stream(ColorPairFormatter::formatColorMap());
    std::string line, prev = "";
    std::vector<std::string> colorNumbers;
    while (std::getline(stream, line)) {
        const char delimiter = '|';
        size_t pos = line.find(delimiter);
        if (pos != std::string::npos) {
            std::string colorNumber = line.substr(0, pos);
            colorNumbers.push_back(colorNumber);
        }
    }

    if (!colorNumbers.empty()) {
        for (int i = 0; i < colorNumbers.size(); i++) {
            for (int j = i + 1; j < colorNumbers.size(); j++) {
                assert(colorNumbers[i] != colorNumbers[j]);
            }
        }
    }
}

void ColorPairTests::testNumberOfPairs() {
    std::istringstream stream(ColorPairFormatter::formatColorMap());
    std::string line, prev = "";
    unsigned int count = 0;
    while (std::getline(stream, line)) {
        count++;
    }
    assert(count == (numberOfMajorColors * numberOfMinorColors));
}
