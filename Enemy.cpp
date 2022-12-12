#include "Enemy.h"

Enemy::Enemy() {}
Enemy::Enemy(int row_position, int col_position, Maze* maze) : Entity (row_position, col_position) {

	maze->set_position(row_position, col_position, row_position, col_position, enemy);

}

void Enemy::move(Maze* maze, char direction) {

	switch (direction) {
	case 'w': move_up(maze); break;
	case 'a': move_left(maze); break;
	case 's': move_down(maze); break;
	case 'd': move_right(maze); break;
	}

	return;

}

void Enemy::move_up(Maze* maze) {

	if (position.get_row_position() + 1 >= maze->get_size()) return;

	if (maze->get_position_by_coordinates(position.get_row_position() + 1, position.get_col_position()) == wall) return;

	if (maze->get_position_by_coordinates(position.get_row_position() + 1, position.get_col_position()) == free_space) {

		maze->set_position(position.get_row_position(), position.get_col_position(), position.get_row_position() + 1, position.get_col_position(), enemy);
		position.move_down();

	}

	return;

}

void Enemy::move_down(Maze* maze) {

	if (position.get_row_position() - 1 < 0) return;

	if (maze->get_position_by_coordinates(position.get_row_position() - 1, position.get_col_position()) == wall) return;

	if (maze->get_position_by_coordinates(position.get_row_position() - 1, position.get_col_position()) == free_space) {

		maze->set_position(position.get_row_position(), position.get_col_position(), position.get_row_position() - 1, position.get_col_position(), enemy);
		position.move_up();

	}

	return;

}

void Enemy::move_left(Maze* maze) {

	if (position.get_col_position() - 1 < 0) return;

	if (maze->get_position_by_coordinates(position.get_row_position(), position.get_col_position() - 1) == wall) return;
	
	if (maze->get_position_by_coordinates(position.get_row_position(), position.get_col_position() - 1) == free_space) {

		maze->set_position(position.get_row_position(), position.get_col_position(), position.get_row_position(), position.get_col_position() - 1, enemy);
		position.move_left();

	}

	return;

}

void Enemy::move_right(Maze* maze) {

	if (position.get_col_position() + 1 >= maze->get_size()) return;

	if (maze->get_position_by_coordinates(position.get_row_position(), position.get_col_position() + 1) == wall) return;

	if (maze->get_position_by_coordinates(position.get_row_position(), position.get_col_position() + 1) == free_space) {

		maze->set_position(position.get_row_position(), position.get_col_position(), position.get_row_position(), position.get_col_position() + 1, enemy);
		position.move_right();

	}

	return;

}

