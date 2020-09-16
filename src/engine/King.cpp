#include "King.hpp"

King::King(int x, int y, char rep) : Piece(x, y, 'K') {}

King::~King() {}

int King::CanMove(int x, int y) {
	if (this->coords.first+1 == x && this->coords.second == y)
		return 1;
	else if (this->coords.first-1 == x && this->coords.second == y)
		return 1;
	else if (this->coords.first == x && this->coords.second+1 == y)
		return 1;
	else if (this->coords.first == x && this->coords.second-1 == y)
		return 1;
	else if (this->coords.first+1 == x && this->coords.second+1 == y)
		return 1;
	else if (this->coords.first+1 == x && this->coords.second-1 == y)
		return 1;
	else if (this->coords.first-1 == x && this->coords.second+1 == y)
		return 1;
	else if (this->coords.first-1 == x && this->coords.second-1 == y)
		return 1;
	return 0;
}
