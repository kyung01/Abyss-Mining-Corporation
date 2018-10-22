#include "Clock.h"

void Clock::begin() {
	mClockBegin = clock();

}

void Clock::end()
{
	mClockEnd = clock();
}

float Clock::getElapsedTime()
{
	return float(mClockEnd - mClockBegin) / CLOCKS_PER_SEC;
}
