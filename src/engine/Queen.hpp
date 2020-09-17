#include "Piece.hpp"

#ifndef QUEEN_HPP_
#define QUEEN_HPP_
class Queen : public Piece {
  public:
	Queen(int x, int y, int owner);
	~Queen();
	int CanMove(int x, int y, std::vector<std::vector<Piece*>> &board);
};
#endif // QUEEN_HPP_
