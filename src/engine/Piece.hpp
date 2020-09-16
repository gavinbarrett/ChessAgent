#include <utility>
#include <string>
#include <iostream>

#ifndef PIECE_HPP_
#define PIECE_HPP_
class Piece {
  public:
  	Piece(int x, int y, char rep, int owner);
	virtual ~Piece();
	virtual int CanMove(int x, int y);
	void Move(int x, int y);
  	void PrintPiece();
	int GetY();
	int GetX();
	std::pair<int,int> coords;
	char repr;
	int owner;
};
#endif // PIECE_HPP_
