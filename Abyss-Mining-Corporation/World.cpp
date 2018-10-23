#include "World.h"
using namespace NGame;

void World::init(int worldWidth, int worldHeight)
{

	mTiles.resize(boost::extents[worldWidth][worldHeight]);
	mTileSimIndexs.resize(boost::extents[worldWidth][worldHeight]);
	int values = 0;
	for (int i = 0; i != worldWidth; ++i)
		for (int j = 0; j != worldHeight; ++j) {
			mTileSimIndexs[i][j] = -1;
		}

	int simHeight = (int)(worldHeight / 2);
	//add sims
	for (int i = 0; i < worldWidth; i++) {
		addSim(i, simHeight);
	}
}

//interfaces

void NGame::World::onSimMovedTo(Sim *sim,int fromX, int fromY, int toX, int toY) {
	if (sim->getIsMaterial()){
		mTiles[fromX][fromY].state = Tile::TILE_STATE::EMPTY;
		mTiles[toX][toY].state = Tile::TILE_STATE::OCCUPIED;

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
	mTileSimIndexs[x][y] = mSims.size() - 1;
}

Sim * NGame::World::getSim(int x, int y)
{
	int index = mTileSimIndexs[x][y];
	if (index == -1) return 0;
	return &mSims[index];
}

