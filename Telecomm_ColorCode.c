#include <stdio.h>          /* For printf() */
#include "ColorPairEvaluate.h"  /* For ColorPair.h and Evaluate.....() Interfaces */

void PrintColorCodeManual(void)
{
    int majorcolor, minorcolor;
    ColorPair colorpair;
    printf(" MAJORCOLOR    MINORCOLOR   PAIRNUMBER \n");
    for(majorcolor =0; majorcolor < MajorColor_TotalNumber ; majorcolor++)
    {
        for(minorcolor =0; minorcolor < MinorColor_TotalNumber ; minorcolor++)
        {
            colorpair.majorColor = ((MajorColor_t)majorcolor);
            colorpair.minorColor = ((MinorColor_t)minorcolor);
            printf(" %9s %13s %7d \n",
                    MajorColorToString(colorpair.majorColor),
                    MinorColorToString(colorpair.minorColor),
                    GetPairNumberFromColor(&colorpair));
        }
    }
}

int main()
{
    EvaluateNumberToColorPair(4, WHITE, BROWN);
    EvaluateNumberToColorPair(5, WHITE, SLATE);

    EvaluateColorPairToNumber(BLACK, ORANGE, 12);
    EvaluateColorPairToNumber(VIOLET, SLATE, 25);
    
    PrintColorCodeManual();

    return 0;
}
