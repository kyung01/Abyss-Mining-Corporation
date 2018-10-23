#pragma once
#include "World.h"


namespace NGame {

	
	class Game {


		World mWorld;


	public:
		void init(const int worldWidth, int worldHeight);
		void update(float timeElapsed);

	};
}