#include "Piece.hpp"

#ifndef ROOK_HPP_
#define ROOK_HPP_
class Rook : public Piece {
  public:
	Rook(int x, int y, char rep);
	~Rook();
	int CanMove(int x, int y);
};
#endif // ROOK_HPP_
