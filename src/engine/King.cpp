#include "King.hpp"

King::King(int x, int y, int owner) : Piece(x, y, 'K', owner) {}

King::~King() {}

int King::CanMove(int x, int y, std::vector<std::vector<Piece*>> &board) {
	int px = this->GetX();
	int py = this->GetY();
	if (px+1 == x && py == y)
		return 1;
	else if (px-1 == x && py == y)
		return 1;
	else if (px == x && py+1 == y)
		return 1;
	else if (px == x && py-1 == y)
		return 1;
	else if (px+1 == x && py+1 == y)
		return 1;
	else if (px+1 == x && py-1 == y)
		return 1;
	else if (px-1 == x && py+1 == y)
		return 1;
	else if (px-1 == x && py-1 == y)
		return 1;
	return 0;
}
