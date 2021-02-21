#include <stdio.h>
#include "ColorPair.h"
#include "ColorPairTest.h"

void PrintColorCodeManual(void)
{
    int majorcolor, minorcolor;
    ColorPair colorpair;
    printf(" MAJORCOLOR    MINORCOLOR   PAIRNUMBER \n");
    for(majorcolor =0; majorcolor < TotalNumberOfMajorColors ; majorcolor++)
    {
        for(minorcolor =0; minorcolor < TotalNumberOfMinorColors ; minorcolor++)
        {
            colorpair.majorColor = (MajorColor)majorcolor;
            colorpair.minorColor = (MinorColor)minorcolor;
            printf(" %9s %13s %7d \n",
                    MajorColorToString(colorpair.majorColor),
                    MinorColorToString(colorpair.minorColor),
                    GetPairNumberFromColor(&colorpair));
        }
    }
}

int main()
{
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    
    PrintColorCodeManual();

    return 0;
}
