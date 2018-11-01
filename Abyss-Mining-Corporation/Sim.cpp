#include "Sim.h"
#include "Instruction.h"
using namespace NGame;


Sim& NGame::Sim::link(SimEventHandler * listener)
{
	mListeners.push_back(listener);
	return *this;
}

void NGame::Sim::update(World& world, float timeElapsed)
{
	if (mInstruciton != 0) {
		mInstruciton->update(world, *this);
		if (mInstruciton->getIsOver()) {
			mInstruciton.reset(mInstruciton->getNextInstruction());
		}
	}
	/*
	*/
}


NGame::Sim::Sim() :isMaterial(true)
{
}


Direction NGame::Sim::getDirectionFacing()
{
	return Direction();
}

bool NGame::Sim::requestToMove(Sim other)
{
	return false;
}

Sim& NGame::Sim::setPosition(int x, int y)
{
	mX = x;
	mY = y;
	return *this;
}

bool NGame::Sim::getIsMaterial()
{
	return isMaterial;
}

void NGame::Sim::moveTo(World & world, int x, int y)
{
}
