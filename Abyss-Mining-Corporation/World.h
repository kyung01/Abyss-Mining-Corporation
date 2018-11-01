#pragma once
#include "Tile.h"
#include "TileArray.h"
#include "Sim.h"

#include "boost/multi_array.hpp"
#include <cassert>

namespace NGame {


	class World : public SimEventHandler{
		TileArray mTiles;
		boost::array<Sim, 1> mSims;
		
	public:
		//interface
		void onSimMovedTo(Sim &sim, int fromX, int fromY, int toX, int toY);

		void init(int worldWidth, int worldHeight);
		void update(float timeElapsed);

		void addSim(int x, int y);
		Sim& getSim(int x, int y);



	};

}