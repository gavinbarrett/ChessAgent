#include "Knight.hpp"

Knight::Knight(int x, int y, int owner) : Piece(x, y, 'N', owner) {}

Knight::~Knight() {}

int Knight::CanMove(int x, int y, std::vector<std::vector<Piece*>> &board) {
	return 1;
}
