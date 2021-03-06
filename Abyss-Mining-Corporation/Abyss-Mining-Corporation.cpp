// Abyss-Mining-Corporation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include "Game.h"
#include "Clock.h"

using namespace std;

#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

int main()
{

	NGame::Game mGame;
	Clock mClock;
	float mTimeElapsed(0);
	
	mGame.init(20, 20);

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

