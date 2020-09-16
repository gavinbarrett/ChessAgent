#include "Pawn.hpp"

Pawn::Pawn(int x, int y, int owner) : Piece(x, y, 'P', owner) {}

Pawn::~Pawn() {}

int Pawn::CanMove(int x, int y) {
	if (this->coords.second == 2) {
		// check if 
		return 1;
	} else {
		return 1;
	}
	return 1;
}
