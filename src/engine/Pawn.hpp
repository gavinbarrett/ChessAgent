#include "Piece.hpp"

#ifndef PAWN_HPP_
#define PAWN_HPP_
class Pawn : public Piece {
  public:
	Pawn(int x, int y, int owner);
	~Pawn();
	void AttackMove(Piece* piece, int x, int y, std::vector<std::vector<Piece*>> &board);
	int CanMove(int x, int y, std::vector<std::vector<Piece*>> &board);
};
#endif // PAWN_HPP_
