#include <stdio.h>
#include <assert.h>
#include "ColorPairEvaluate.h"

void EvaluateNumberToColorPair(int pairNumber,MajorColor_t expectedMajor, MinorColor_t expectedMinor)
{
    ColorPair colorPair;
    char colorPairNames[COLORPAIRNAME_MAXCHARS];

    colorPair = GetColorFromPairNumber(pairNumber);
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);

    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

void EvaluateColorPairToNumber( MajorColor_t major, MinorColor_t minor, int expectedPairNumber)
{
    ColorPair colorPair;
    int pairNumber;

    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    
    assert(pairNumber == expectedPairNumber);
}
