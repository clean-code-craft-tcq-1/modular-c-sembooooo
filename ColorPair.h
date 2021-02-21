#ifndef COLOR_PAIR_H_
#define COLOR_PAIR_H_

#include "MajorColor.h"
#include "MinorColor.h"

typedef struct {
    MajorColor majorColor;
    MinorColor minorColor;
} ColorPair;

extern void ColorPairToString(const ColorPair* colorPair, char* buffer);

extern ColorPair GetColorFromPairNumber(int pairNumber);

extern int GetPairNumberFromColor(const ColorPair* colorPair);

#endif  /*COLOR_PAIR_H_*/