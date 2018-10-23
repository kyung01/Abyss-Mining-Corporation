#pragma once
#include "GameEnums.h"

#include <boost/container/list.hpp>

namespace NGame {
	class Sim;

	class SimEventHandler {
	public:
		virtual void onSimMovedTo(Sim *sim, int x, int y, int toX, int toY) = 0;
	};
	
	class Sim {
		enum SimState{DEFAULT=0, PROCESSING_MOVEMENT};

		Direction mDirFacing;
		SimState mState;
		boost::container::list<SimEventHandler*> mEvents;
		
		//positions on board
		int mTurnCount;
		int mX, mY;
		int mJumpHeightMax;
		int mJmpHeight;

		bool isMaterial;

	public:
		int test;

		Sim();
		Sim link(SimEventHandler *listener);

		Direction getDirectionFacing();
		bool requestToMove(Sim other);
		void update(float timeElapsed);
		Sim setPosition(int x, int y);

		bool getIsMaterial();
		
	

	};

}