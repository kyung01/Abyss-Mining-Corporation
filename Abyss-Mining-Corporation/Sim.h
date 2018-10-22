#pragma once
#include "GameEnums.h"
namespace NGame {
	class Sim {
		enum SimState{DEFAULT=0, PROCESSING_MOVEMENT};

		Direction mDirFacing;
		SimState mState;
		//positions on board
		int mTurnCount;
		int mX, mY;
		int mJumpHeightMax;
		int mJmpHeight;

	public:
		Sim();
		Direction getDirectionFacing();
		bool requestToMove(Sim other);
		void update(float timeElapsed);
		
	

	};

}