#include "Pawn.hpp"

Pawn::Pawn(int x, int y, char rep) : Piece(x, y, rep) {}

Pawn::~Pawn() {}

int Pawn::CanMove(int x, int y) {
	if (this->coords.second == 2) {

	} else {

	}
	return 0;	
}
