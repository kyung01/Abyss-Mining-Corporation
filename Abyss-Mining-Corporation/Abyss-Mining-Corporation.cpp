// Abyss-Mining-Corporation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include "Game.h"
#include "Clock.h"

using namespace std;


int main()
{
	Game mGame;
	Clock mClock;
	float mTimeElapsed(0);

	while (true) {
		mClock.begin();
		mGame.update(mTimeElapsed);
		getchar();
		mClock.end();
		mTimeElapsed = mClock.getElapsedTime();
		cout <<"TimeElapsed: "<< mTimeElapsed << endl;
	}
    return 0;
}

