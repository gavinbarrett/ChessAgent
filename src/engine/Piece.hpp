#include <utility>
#include <string>
#include <vector>
#include <iostream>

#define BLUE    "\033[34m"
#define GREEN   "\033[32m"
#define RESET   "\033[0m"

#ifndef PIECE_HPP_
#define PIECE_HPP_
class Piece {
  public:
  	Piece(int x, int y, char rep, int owner);
	virtual ~Piece();
	virtual int CanMove(int x, int y, std::vector<std::vector<Piece*>> &board);
	void Move(int x, int y);
  	void PrintPiece();
	void PrintPointer();
	int IsEnemy(int thisPiece, int thatPiece);
	int GetY();
	int GetX();
	std::pair<int,int> coords;
	char repr;
	int owner;
};
#endif // PIECE_HPP_
