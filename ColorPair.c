#include <stdio.h>          /*For sprintf() */
#include "ColorPair.h"      /* Units header - contains prototypes , enums etc.,. */

void ColorPairToString(const ColorPair* colorPair, char* buffer)
{
    sprintf(buffer, "%s %s", MajorColorToString(colorPair->majorColor),
                             MinorColorToString(colorPair->minorColor));
}

ColorPair GetColorFromPairNumber(int pairNumber)
{
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = (MajorColor_t)(zeroBasedPairNumber / MinorColor_TotalNumber);
    colorPair.minorColor = (MinorColor_t)(zeroBasedPairNumber % MinorColor_TotalNumber);
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair* colorPair)
{
    int PairNumber;
    PairNumber = (colorPair->majorColor * MinorColor_TotalNumber) + (colorPair->minorColor) + 1;
    return PairNumber;
}
