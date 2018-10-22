#pragma once
#include "World.h"
#include "Sim.h"

namespace NGame {

	typedef boost::multi_array<Tile, 2> TileArray2D;
	typedef TileArray2D::index TileArray2DIndex;
	
	class Game {


		World mWorld;

		TileArray2D mTiles;
		boost::array<Sim,1> mSims;

	public:
		void init(const int worldWidth, int worldHeight);
		void update(float timeElapsed);

	};
}