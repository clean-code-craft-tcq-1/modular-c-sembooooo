#ifndef COLOR_PAIR_TEST_H_
#define COLOR_PAIR_TEST_H_

#include "ColorPair.h"

extern void testNumberToPair(int pairNumber,MajorColor expectedMajor, MinorColor expectedMinor);

extern void testPairToNumber( MajorColor major, MinorColor minor, int expectedPairNumber);

#endif  /*COLOR_PAIR_TEST_H_*/