#include "TileArray.h"
using namespace NGame;

void NGame::TileArray::resize(int w, int h)
{
	mTiles.resize(boost::extents[w][h]);
}

void NGame::TileArray::out(Sim & sim, int x, int y)
{
}

void NGame::TileArray::on(Sim & sim, int x, int y)
{
}

Sim * NGame::TileArray::getSim(int x, int y)
{
	return mTiles[x][y].mSim;
}
