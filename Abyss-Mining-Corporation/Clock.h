#pragma once
#include <ctime>

class Clock {
	clock_t mClockBegin,mClockEnd;

public:
	void begin();
	void end();
	float getElapsedTime();

};