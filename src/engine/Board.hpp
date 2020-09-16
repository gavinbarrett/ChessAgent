#include "Piece.hpp"
#include "Pawn.hpp"
#include "Rook.hpp"
#include "Bishop.hpp"
#include "Knight.hpp"
#include "King.hpp"
#include "Queen.hpp"
#include <iostream>
#include <vector>

#ifndef BOARD_HPP_
#define BOARD_HPP_
class Board {
  public:
	Board();
	~Board();
  	void Display();
	int OffBoard(int x1, int y1, int x2, int y2);
  	int CanMakeMove(int x1, int y1, int x2, int y2);
	void MakeMove(Piece* piece, int new_x, int new_y);
	std::vector<std::vector<Piece*>> board;
	int dim;
};
#endif // BOARD_HPP_
