#include "Position.h"

Position::Position() : row(0), col(0) {}

Position::Position(int row, int col) : row (row), col (col) {}

void Position::move_up() {

	row--;

}

void Position::move_down() {

	row++;

}

void Position::move_left() {

	col--;

}

void Position::move_right() {

	col++;

}

int Position::get_row_position() { return row; }

int Position::get_col_position() { return col; }
