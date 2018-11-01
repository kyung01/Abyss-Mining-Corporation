#pragma once
#include "Sim.h"
namespace NGame {
	struct Tile{
		enum TILE_STATE { EMPTY=0, OCCUPIED=1, DISABLED};
		TILE_STATE state;
		/*costMovement represents the cost to move to this block*/
		float costMovement;
		Sim* mSim;
	
		float getCostMovement();

	};

}