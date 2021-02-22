#ifndef COLOR_PAIR_EVALUATE_H_
#define COLOR_PAIR_EVALUATE_H_

#include "ColorPair.h"

extern void EvaluateNumberToColorPair(int pairNumber,MajorColor_t expectedMajor, MinorColor_t expectedMinor);

extern void EvaluateColorPairToNumber( MajorColor_t major, MinorColor_t minor, int expectedPairNumber);

#endif  /*COLOR_PAIR_EVALUATE_H_*/