#ifndef MINOR_COLOR_H_
#define MINOR_COLOR_H_
typedef enum {
    MinorColor_BLUE,
    MinorColor_ORANGE, 
    MinorColor_GREEN, 
    MinorColor_BROWN,
    MinorColor_SLATE,
    MinorColor_TotalNumber
    } MinorColor_t;

#define MINORCOLORNAME_MAXCHARS     ((int)6)

extern const char * MinorColorToString(MinorColor_t minorcolor);

#endif  /*MINOR_COLOR_H_*/