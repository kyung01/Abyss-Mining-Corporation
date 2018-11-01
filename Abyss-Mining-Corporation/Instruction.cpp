#include "Instruction.h"
using namespace  NGame;


NGame::Instruction::Instruction():
	isOver(false)
{
}

bool NGame::Instruction::getIsOver()
{
	return isOver;
}

Instruction* NGame::Instruction::getNextInstruction()
{
	return &(*nextInstruction);
}
