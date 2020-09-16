#include "Piece.hpp"

#ifndef KING_HPP_
#define KING_HPP_
class King : public Piece {
  public:
	King(int x, int y, int owner);
	~King();
	int CanMove(int x, int y);
};
#endif // KING_HPP_
