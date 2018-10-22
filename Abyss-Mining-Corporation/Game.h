#pragma once
#include "World.h"


class Game {
	World mWorld;

public:
	void init();
	void update(float timeElapsed);

};