#pragma once

enum TShirtSizeEnum
{
    INVALID = -1,
    S,
    M,
    L,
};

class TShirtSize
{
public:
    static TShirtSizeEnum getTShirtSize(int shoulderWidth);
};
