#ifndef COLOR_PAIR_H_
#define COLOR_PAIR_H_

#include "MajorColor.h"  /*For Majorcolor_t, MAJORCOLORNAME_MAXCHARS ,MajorColorToString() */ 
#include "MinorColor.h"  /*For Minorcolor_t, MINORCOLORNAME_MAXCHARS ,MinorColorToString() */   

typedef struct {
    MajorColor_t majorColor;
    MinorColor_t minorColor;
} ColorPair;


#define COLORPAIRNAME_EXTRABUFFLEN      ((int)4)
#define COLORPAIRNAME_MAXCHARS  \
            (MAJORCOLORNAME_MAXCHARS + MINORCOLORNAME_MAXCHARS + COLORPAIRNAME_EXTRABUFFLEN)
     

extern void ColorPairToString(const ColorPair* colorPair, char* buffer);

extern ColorPair GetColorFromPairNumber(int pairNumber);

extern int GetPairNumberFromColor(const ColorPair* colorPair);

#endif  /*COLOR_PAIR_H_*/