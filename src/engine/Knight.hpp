#include "Piece.hpp"

#ifndef KNIGHT_HPP_
#define KNIGHT_HPP_
class Knight : public Piece {
  public:
	Knight(int x, int y, int owner);
	~Knight();
};
#endif // KNIGHT_HPP_
