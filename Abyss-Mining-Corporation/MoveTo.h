#pragma once
#include "Instruction.h"
#include <boost/tuple/tuple.hpp>
#include <boost/tuple/tuple_io.hpp>
#include "Structs.h"

namespace NGame {
	
	class MoveTo : public Instruction {
		boost::container::list<Position2D> positions;
	public:
		void update(World &world, Sim &sim) override;

	};

}