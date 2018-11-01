#include "World.h"
using namespace NGame;

void World::init(int worldWidth, int worldHeight)
{
	mTiles.resize(worldWidth, worldHeight);
	int values = 0;
	
	int simHeight = (int)(worldHeight / 2);
	//add sims
	for (int i = 0; i < worldWidth; i++) {
		addSim(i, simHeight);
	}
}

//event listeners

void NGame::World::onSimMovedTo(Sim &sim, int fromX, int fromY, int toX, int toY) {
	if (sim.getIsMaterial()){
		mTiles.out(sim, fromX, fromY);
		mTiles.on(sim, toX, toY);
	}
}

//member functions

void NGame::World::update(float timeElapsed)
{
}

void NGame::World::addSim(int x, int y)
{
	Sim sim = Sim().setPosition(x, y);
	sim.link(this);
	mSims.assign(sim);
	mTiles.on(sim, x, y);
}

Sim& NGame::World::getSim(int x, int y)
{
	return *mTiles.getSim(x, y);
}

