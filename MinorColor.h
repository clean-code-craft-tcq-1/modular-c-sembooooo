#ifndef MINOR_COLOR_H_
#define MINOR_COLOR_H_
typedef enum {
    BLUE,
    ORANGE, 
    GREEN, 
    BROWN,
    SLATE,
    TotalNumberOfMinorColors
    } MinorColor;

extern const char * MinorColorToString(MinorColor minorcolor);

#endif  /*MINOR_COLOR_H_*/