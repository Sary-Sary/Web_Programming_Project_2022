#pragma once

class Position
{
	int row;
	int col;

public:

	Position();
	Position(int row, int col);

	void move_up();
	void move_down();
	void move_left();
	void move_right();

	int get_row_position();
	int get_col_position();

};

