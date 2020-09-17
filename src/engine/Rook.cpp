#include "Rook.hpp"

Rook::Rook(int x, int y, int owner) : Piece(x, y, 'R', owner) {}

Rook::~Rook() {}

int Rook::CanMove(int x, int y, std::vector<std::vector<Piece*>> &board) {
	int px = this->GetX();
	int py = this->GetY();
	if (px != x && py != y)
		return 0;
	return 0;	
}
