#ifndef MAJOR_COLOR_H_
#define MAJOR_COLOR_H_

typedef enum {
    WHITE ,
    RED,
    BLACK,
    YELLOW,
    VIOLET,
    TotalNumberOfMajorColors
    } MajorColor;

extern const char * MajorColorToString(MajorColor majorcolor );

#endif  /*MAJOR_COLOR_H_*/