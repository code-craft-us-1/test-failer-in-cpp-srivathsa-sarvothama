#include "TShirtSize.h"

TShirtSizeEnum TShirtSize::getTShirtSize(int shoulderWidthCms) {
    TShirtSizeEnum size = TShirtSizeEnum::INVALID;
    if (shoulderWidthCms < 38) {
        size = TShirtSizeEnum::S;
    } else if (shoulderWidthCms > 38 && shoulderWidthCms < 42) {
        size = TShirtSizeEnum::M;
    } else if (shoulderWidthCms > 42) {
        size = TShirtSizeEnum::L;
    }
    return size;
}
