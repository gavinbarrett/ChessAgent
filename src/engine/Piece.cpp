#include "Piece.hpp"
#include <iostream>

Piece::Piece(int x, int y, char rep) : coords(x, y), repr(rep) {}

Piece::~Piece() {}

void Piece::Move(int x, int y) {
	this->coords.first = x; this->coords.second = y;
}

int Piece::CanMove(int x, int y) {
	return 0;
}

void Piece::PrintPiece() {
	std::cout << this->repr << " ";
}
