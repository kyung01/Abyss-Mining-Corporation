#pragma once
#include "GameEnums.h"

#include <boost/container/list.hpp>

namespace NGame {
	class World;
	class Sim;
	class Instruction;

	class SimEventHandler {
	public:
		virtual void onSimMovedTo(Sim &sim, int x, int y, int toX, int toY) = 0;
	};
	
	class Sim {
		enum SimState{DEFAULT=0, PROCESSING_MOVEMENT};

		Direction mDirFacing;
		SimState mState;
		boost::container::list<SimEventHandler*> mListeners;
		
		//positions on board
		int mTurnCount;
		int mX, mY;
		int mJumpHeightMax;
		int mJmpHeight;

		bool isMaterial;

		//Logis
		std::shared_ptr<Instruction> mInstruciton;

	public:
		int test;

		Sim();
		Sim& link(SimEventHandler *listener);
		void update(World& world, float timeElapsed);

		Direction getDirectionFacing();
		bool requestToMove(Sim other);
		Sim& setPosition(int x, int y);

		bool getIsMaterial();
		
		void moveTo(World& world, int x, int y);
	

	};

}