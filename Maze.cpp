#include "Maze.h"
#include <iostream>

Maze::Maze() {

	for (int i = 0; i < 10; i++) {

		maze.push_back({});

		for (int j = 0; j < 10; j++) {

			maze[i].push_back(free_space);

		}
	}

	maze[5][6] = wall;
	maze[5][3] = enemy;

}

void Maze::print() {

	size_t size = maze.size();

	for (size_t i = 0; i < size; i++) {

		for (size_t j = 0; j < size; j++) {

			std::cout << maze[i][j] << " ";

		}

		std::cout << "\b\n";

	}

}

int Maze::get_position_by_coordinates(int row, int col) {

	return maze[row][col];

}

void Maze::set_position(int old_row, int old_col, int new_row, int new_col, int object) {

	maze[old_row][old_col] = free_space;
	maze[new_row][new_col] = object;

}

size_t Maze::get_size() { return maze.size(); }
