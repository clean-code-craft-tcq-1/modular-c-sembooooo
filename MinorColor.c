#include "MinorColor.h"         /*units header - contains typedef and prototypes etc */

const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

const char * MinorColorToString(MinorColor_t minorcolor)
{
    return (MinorColorNames[minorcolor]);
}