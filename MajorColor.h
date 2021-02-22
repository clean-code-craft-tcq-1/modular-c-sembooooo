#ifndef MAJOR_COLOR_H_
#define MAJOR_COLOR_H_

typedef enum {
    MajorColor_WHITE ,
    MajorColor_RED,
    MajorColor_BLACK,
    MajorColor_YELLOW,
    MajorColor_VIOLET,
    MajorColor_TotalNumber
    } MajorColor_t;

#define MAJORCOLORNAME_MAXCHARS     ((int)6)
extern const char * MajorColorToString(MajorColor_t majorcolor );

#endif  /*MAJOR_COLOR_H_*/