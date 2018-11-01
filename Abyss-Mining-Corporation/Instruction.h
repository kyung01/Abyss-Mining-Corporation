#pragma once
#include "Sim.h"
#include <memory>

namespace NGame {
	class World;

	//Sim follows an instruction.
	//Instruction can have another instruction, making a behaviour more complex.
	class Instruction {
	protected:
		bool isOver;
		std::shared_ptr<Instruction> nextInstruction;
	public:
		Instruction();
		virtual void update(World &world, Sim &sim) = 0;
		bool getIsOver();
		Instruction* getNextInstruction();

	};
}