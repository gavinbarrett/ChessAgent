#include "Rook.hpp"

Rook::Rook(int x, int y, char rep) : Piece(x, y, rep) {}

Rook::~Rook() {}

int Rook::CanMove(int x, int y) {
	if (this->coords.first != x && this->coords.second != y)
		return 0;
	return 0;	
}
