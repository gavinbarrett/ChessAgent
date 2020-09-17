#include "Piece.hpp"

#ifndef ROOK_HPP_
#define ROOK_HPP_
class Rook : public Piece {
  public:
	Rook(int x, int y, int owner);
	~Rook();
	int CanMove(int x, int y, std::vector<std::vector<Piece*>> &board);
};
#endif // ROOK_HPP_
