#include "Game.h"
#include "boost/multi_array.hpp"
#include <cassert>

using namespace NGame;

typedef boost::multi_array<Tile, 2> TileArray2D;
typedef TileArray2D::index TileArray2DIndex;
void Game::init(const int worldWidth, int worldHeight)
{
	TileArray2D A(boost::extents[worldWidth][worldHeight]);
	int values = 0;
	for (TileArray2DIndex i = 0; i != worldWidth; ++i)
		for (TileArray2DIndex j = 0; j != worldHeight; ++j) {
		}
}

void Game::update(float timeElapsed)
{
}
