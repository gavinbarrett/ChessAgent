#include <utility>

#ifndef PIECE_HPP_
#define PIECE_HPP_
class Piece {
  public:
  	Piece(int x, int y, char rep);
	~Piece();
	virtual int CanMove(int x, int y);
	void Move(int x, int y);
  	void PrintPiece();
	std::pair<int,int> coords;
	char repr;
};
#endif // PIECE_HPP_
