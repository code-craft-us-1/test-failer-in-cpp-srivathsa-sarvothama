#include <assert.h>
#include <list>

#include "TShirtsTests.h"
#include "TShirtSize.h"

void TShirtsTests::testTShirtSizes() {
    std::list<std::pair<int, TShirtSizeEnum>> testData{
        { 37, TShirtSizeEnum::S },
        { 38, TShirtSizeEnum::S },
        { 39, TShirtSizeEnum::M },
        { 40, TShirtSizeEnum::M },
        { 41, TShirtSizeEnum::M },
        { 42, TShirtSizeEnum::L },
        { 43, TShirtSizeEnum::L }
    };

    for (const auto& pair : testData) {
        assert((TShirtSize::getTShirtSize(pair.first)) == pair.second);
    }
}

