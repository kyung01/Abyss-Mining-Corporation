#include "Sim.h"
using namespace NGame;

NGame::Sim::Sim() :isMaterial(true)
{
}

Sim NGame::Sim::link(SimEventHandler * listener)
{
	return Sim();
}

Direction NGame::Sim::getDirectionFacing()
{
	return Direction();
}

bool NGame::Sim::requestToMove(Sim other)
{
	return false;
}

void NGame::Sim::update(float timeElapsed)
{
}

Sim NGame::Sim::setPosition(int x, int y)
{
	mX = x;
	mY = y;
	return *this;
}

bool NGame::Sim::getIsMaterial()
{
	return isMaterial;
}
