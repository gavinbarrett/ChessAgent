#include "Piece.hpp"

Piece::Piece(int x, int y) : coords(x, y) {}

Piece::~Piece() {}

void Piece::Move(int x, int y) {
	this->coords.first = x; this->coords.second = y;
}
