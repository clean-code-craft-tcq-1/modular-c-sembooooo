#include <stdio.h>
#include <assert.h>
#include "ColorPairTest.h"

const int kMaxColorPairNameChars = 16;

void testNumberToPair(int pairNumber,MajorColor expectedMajor, MinorColor expectedMinor)
{
    ColorPair colorPair;
    char colorPairNames[kMaxColorPairNameChars];

    colorPair = GetColorFromPairNumber(pairNumber);
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);

    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

void testPairToNumber( MajorColor major, MinorColor minor, int expectedPairNumber)
{
    ColorPair colorPair;
    int pairNumber;

    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    
    assert(pairNumber == expectedPairNumber);
}
