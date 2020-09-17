#include "Piece.hpp"

#ifndef KNIGHT_HPP_
#define KNIGHT_HPP_
class Knight : public Piece {
  public:
	Knight(int x, int y, int owner);
	~Knight();
	int CanMove(int x, int y, std::vector<std::vector<Piece*>> &board);
};
#endif // KNIGHT_HPP_
