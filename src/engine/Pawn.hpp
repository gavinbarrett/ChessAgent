#include "Piece.hpp"

#ifndef PAWN_HPP_
#define PAWN_HPP_
class Pawn : public Piece {
  public:
	Pawn(int x, int y, char rep);
	~Pawn();
	int CanMove(int x, int y);
};
#endif // PAWN_HPP_
