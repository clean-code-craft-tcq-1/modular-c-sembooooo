#include "MajorColor.h"         /*units header - contains typedef and prototypes */

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char * MajorColorToString(MajorColor majorcolor )
{
    return MajorColorNames[majorcolor];
}