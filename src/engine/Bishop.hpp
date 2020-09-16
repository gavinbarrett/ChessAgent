#include "Piece.hpp"

#ifndef BISHOP_HPP_
#define BISHOP_HPP_
class Bishop : public Piece {
  public:
	Bishop(int x, int y, int owner);
	~Bishop();
};
#endif // BISHOP_HPP_
