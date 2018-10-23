#include "Game.h"

using namespace NGame;

void Game::init(const int worldWidth, int worldHeight)
{
}

void Game::update(float timeElapsed)
{
	mWorld.update(timeElapsed);
}
