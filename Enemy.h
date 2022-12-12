#pragma once
#include "Entity.h"

class Enemy : private Entity
{
	
public:

	Enemy();
	Enemy(int row_position, int col_position, Maze* maze);

	virtual void move(Maze* maze, char direction);

	virtual void move_up(Maze* maze);
	virtual void move_down(Maze* maze);
	virtual void move_left(Maze* maze);
	virtual void move_right(Maze* maze);

};

