#include "MoveTo.h"

void NGame::MoveTo::update(World & world, Sim & sim)
{
	if (isOver) return;
	if (positions.size() == 0) {
		isOver = true;
		return;
	}
	sim.moveTo(world, positions.begin()->x, positions.begin()->y);
}
