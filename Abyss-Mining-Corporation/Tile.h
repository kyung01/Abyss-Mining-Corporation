#pragma once
struct Tile{
	enum TileState { EMPTY=0, OCCUPIED=1, DISABLED};
	TileState state;
	/*costMovement represents the cost to move to this block*/
	float costMovement;
	
public:
	float getCostMovement();

};