#include "Pawn.hpp"

Pawn::Pawn(int x, int y, int owner) : Piece(x, y, 'P', owner) {}

Pawn::~Pawn() {}

void Pawn::AttackMove(Piece* piece, int x, int y, std::vector<std::vector<Piece*>> &board) {
	// delete piece pointer at position x,y
	delete board[x][y];
	// allocate an empty piece in the old position
	board[x][y] = new Piece(x, y, '*', 0);
}

int Pawn::CanMove(int x, int y, std::vector<std::vector<Piece*>> &board) {
	int px = this->GetX();
	int py = this->GetY();
	if ((px == 1) && (this->owner == 1)) {
		if ((x == px+1) && (board[x][y]->owner == 0))
			return 1;
		else if ((x == px+2) && (board[x-1][y]->owner == 0) && (board[x][y]->owner == 0))
			return 1;
		return 0;
	} else if ((px == 6) && (this->owner == 2)) {
		// pawn can possibly move two spaces
		if ((x == px-1) && (board[x][y]->owner == 0))
			return 1;
		else if ((x == px-2) && (board[x+1][y]->owner == 0) && (board[x][y]->owner == 0))
			return 1;
		return 0;
	} else {
		// FIXME can move one space
		if (this->owner == 1) {
			if ((x == px+1) && (y == py) && (board[x][y]->owner == 0))
				return 1;
			else if ((x == px+1) && (y == py-1) && (this->IsEnemy(this->owner, board[x][y]->owner))) {
				this->AttackMove(this, x, y, board);
				return 1;
			} else if ((x == px+1) && (y == py+1) && (this->IsEnemy(this->owner, board[x][y]->owner))) {
				this->AttackMove(this, x, y, board);
				return 1;
			}
			return 0;
		} else if (this->owner == 2) {
			if ((x == px-1) && (y == py) && (board[x][y]->owner == 0))
				return 1;
			else if ((x == px-1) && (y == py-1) && (this->IsEnemy(this->owner, board[x][y]->owner))) {
				this->AttackMove(this, x, y, board);
				return 1;
			} else if ((x == px-1) && (y == py+1) && (this->IsEnemy(this->owner, board[x][y]->owner))) {
				this->AttackMove(this, x, y, board);
				return 1;
			}
			return 0;
		}
		return 0;
	}
	return 0;
}
