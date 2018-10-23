#pragma once
#include "Tile.h"
#include "Sim.h"

#include "boost/multi_array.hpp"
#include <cassert>

namespace NGame {

	typedef boost::multi_array<Tile, 2>	TileArray2D;
	typedef boost::multi_array<int, 2>	IntArray2D;
	typedef TileArray2D::index	TileArray2DIndex;
	typedef IntArray2D::index	IntArray2DIndex;

	class World : public SimEventHandler{

		TileArray2D mTiles;
		IntArray2D mTileSimIndexs;
		boost::array<Sim, 1> mSims;
		
	public:
		//interface
		void onSimMovedTo(Sim *sim, int fromX, int fromY, int toX, int toY);

		void init(int worldWidth, int worldHeight);
		void update(float timeElapsed);

		void addSim(int x, int y);
		Sim* getSim(int x, int y);

	};

}