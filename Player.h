#pragma once
#include "Entity.h"

class Player : private Entity
{
public:

	Player(int row_position, int col_position, Maze* maze);

	virtual void move(Maze* maze, char direction, bool& in_fight);

	virtual void move_up(Maze* maze, bool& in_fight);
	virtual void move_down(Maze* maze, bool& in_fight);
	virtual void move_left(Maze* maze, bool& in_fight);
	virtual void move_right(Maze* maze, bool& in_fight);

	void fight(bool& in_fight);

};


