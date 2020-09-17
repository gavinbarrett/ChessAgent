#include "Piece.hpp"

#ifndef BISHOP_HPP_
#define BISHOP_HPP_
class Bishop : public Piece {
  public:
	Bishop(int x, int y, int owner);
	~Bishop();
	int CanMove(int x, int y, std::vector<std::vector<Piece*>> &board);
};
#endif // BISHOP_HPP_
