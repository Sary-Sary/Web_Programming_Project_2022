#pragma once
#include <vector>

const int free_space = 0;
const int wall = 1;
const int player_position = 9;
const int enemy = 5;

class Maze
{
	std::vector<std::vector <int>> maze;

public:

	Maze();
	void print();
	int get_position_by_coordinates(int row, int col);
	void set_position(int old_row, int old_col, int new_row, int new_col, int object);

	size_t get_size();

};

