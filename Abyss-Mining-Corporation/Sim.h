#pragma once
#include "GameEnums.h"
namespace NGame {
	class Sim {
		enum SimState{DEFAULT=0, PROCESSING_MOVEMENT};

		int mTurnCount;
		Direction mDirFacing;
		//positions on board
		int mX, mY;
		SimState mState;

	public:
		Direction getDirectionFacing();
		bool requestToMove(Sim other);
		
	

	};

}