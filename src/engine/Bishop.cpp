#include "Bishop.hpp"

Bishop::Bishop(int x, int y, int owner) : Piece(x, y, 'B', owner) {}

Bishop::~Bishop() {}

int Bishop::CanMove(int x, int y, std::vector<std::vector<Piece*>> &board) {
	return 1;
}
