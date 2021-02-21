#include <stdio.h>
#include "ColorPair.h"

void ColorPairToString(const ColorPair* colorPair, char* buffer)
{
    sprintf(buffer, "%s %s",
            MajorColorToString(colorPair->majorColor),
            MinorColorToString(colorPair->minorColor));
}

ColorPair GetColorFromPairNumber(int pairNumber)
{
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = (MajorColor)(zeroBasedPairNumber / TotalNumberOfMinorColors);
    colorPair.minorColor = (MinorColor)(zeroBasedPairNumber % TotalNumberOfMinorColors);
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair* colorPair)
{
    int PairNumber;
    PairNumber = colorPair->majorColor * TotalNumberOfMinorColors + colorPair->minorColor + 1;
    return PairNumber;
}
