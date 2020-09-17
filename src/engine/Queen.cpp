#include "Queen.hpp"

Queen::Queen(int x, int y, int owner) : Piece(x, y, 'Q', owner) {}

Queen::~Queen() {}

int Queen::CanMove(int x, int y, std::vector<std::vector<Piece*>> &board) {
	return 0;
}
