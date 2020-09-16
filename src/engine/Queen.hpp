#include "Piece.hpp"

#ifndef QUEEN_HPP_
#define QUEEN_HPP_
class Queen : public Piece {
  public:
	Queen(int x, int y, char rep);
	~Queen();
	int CanMove(int x, int y);
};
#endif // QUEEN_HPP_
