#pragma once

#include "boost/multi_array.hpp"
#include <cassert>
#include "Tile.h"

namespace NGame {

	typedef boost::multi_array<Tile, 2>	TileArray2D;

	typedef TileArray2D::index	TileArray2DIndex;

	class TileArray {
		TileArray2D	mTiles;

	public:
		void resize(int w, int h);
		void out(Sim &sim, int x, int y);
		void on(Sim &sim, int x , int y);
		Sim* getSim(int x, int y);
		
	};

}