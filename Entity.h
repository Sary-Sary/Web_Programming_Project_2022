#pragma once
#include "Position.h"
#include "Maze.h"

class Entity
{

public:

	Position position;

	Entity() = default;
	Entity(int row_position, int col_position) : position (Position(row_position, col_position)) {}

	virtual void move(Maze* maze, char direction, bool& in_fight) = 0;

	virtual void move_up (Maze* maze, bool& in_fight) = 0;
	virtual void move_down (Maze* maze, bool& in_fight) = 0;
	virtual void move_left (Maze* maze, bool& in_fight) = 0;
	virtual void move_right (Maze* maze, bool& in_fight) = 0;

};

