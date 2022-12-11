#include "Player.h"
#include <iostream>

Player::Player(int row_position, int col_position, Maze* maze) : Entity (row_position, col_position) {

	maze->set_position(row_position, col_position, row_position, col_position, player_position);

}

void Player::move(Maze* maze, char direction, bool& in_fight) {

	switch (direction) {
	case 'w': move_up(maze, in_fight); break;
	case 'a': move_left(maze, in_fight); break;
	case 's': move_down(maze, in_fight); break;
	case 'd': move_right(maze, in_fight); break;
	}

	return;

}

void Player::move_down(Maze* maze, bool& in_fight) {

	if (position.get_row_position() + 1 >= maze->get_size()) return;

	if (maze->get_position_by_coordinates(position.get_row_position() + 1, position.get_col_position()) == wall) return;
	if (maze->get_position_by_coordinates(position.get_row_position() + 1, position.get_col_position()) == enemy) fight(in_fight);

	if (maze->get_position_by_coordinates(position.get_row_position() + 1, position.get_col_position()) == free_space) {

		maze->set_position(position.get_row_position(), position.get_col_position(), position.get_row_position() + 1, position.get_col_position(), player_position);
		position.move_down();

	}

	return;

}

void Player::move_up(Maze* maze, bool& in_fight) {

	if (position.get_row_position() - 1 < 0) return;

	if (maze->get_position_by_coordinates(position.get_row_position() - 1, position.get_col_position()) == wall) return;
	if (maze->get_position_by_coordinates(position.get_row_position() - 1, position.get_col_position()) == enemy) fight(in_fight);

	if (maze->get_position_by_coordinates(position.get_row_position() - 1, position.get_col_position()) == free_space) {

		maze->set_position(position.get_row_position(), position.get_col_position(), position.get_row_position() - 1, position.get_col_position(), player_position);
		position.move_up();

	}

	return;

}

void Player::move_left(Maze* maze, bool& in_fight) {

	if (position.get_col_position() - 1 < 0) return;

	if (maze->get_position_by_coordinates(position.get_row_position(), position.get_col_position() - 1) == wall) return;
	if (maze->get_position_by_coordinates(position.get_row_position(), position.get_col_position() - 1) == enemy) fight(in_fight);

	if (maze->get_position_by_coordinates(position.get_row_position(), position.get_col_position() - 1) == free_space) {

		maze->set_position(position.get_row_position(), position.get_col_position(), position.get_row_position(), position.get_col_position() - 1, player_position);
		position.move_left();

	}

	return;

}

void Player::move_right(Maze* maze, bool& in_fight) {

	if (position.get_col_position() + 1 >= maze->get_size()) return;

	if (maze->get_position_by_coordinates(position.get_row_position(), position.get_col_position() + 1) == wall) return;
	if (maze->get_position_by_coordinates(position.get_row_position(), position.get_col_position() + 1) == enemy) fight(in_fight);

	if (maze->get_position_by_coordinates(position.get_row_position(), position.get_col_position() + 1) == free_space) {

		maze->set_position(position.get_row_position(), position.get_col_position(), position.get_row_position(), position.get_col_position() + 1, player_position);
		position.move_right();

	}

	return;

}

void Player::fight(bool& in_fight) { 
	
	//std::cout << "\x1B[2J\x1B[H";
	in_fight = true;

}
