#include "Board.hpp"

Board::Board() : dim(8) {
	
	// allocate Player 1's special pieces
	std::vector<Piece*> p0 = {new Rook(0,0,1), new Knight(0,1,1), new Bishop(0,2,1), new Queen(0,4,1), new King(0,5,1), new Bishop(0,5,1), new Knight(0,6,1), new Rook(0,7,1)};
	// allocate Player 1's pawns
	std::vector<Piece*> p1 = {new Pawn(1,0,1), new Pawn(1,1,1), new Pawn(1,2,1), new Pawn(1,3,1), new Pawn(1,4,1), new Pawn(1,5,1), new Pawn(1,6,1), new Pawn(1,7,1)};
	
	// allocate all empty tiles
	std::vector<Piece*> p2 = {new Piece(2,0,'*',0), new Piece(2,1,'*',0), new Piece(2,2,'*',0), new Piece(2,3,'*',0), new Piece(2,4,'*',0), new Piece(2,5,'*',0), new Piece(2,6,'*',0), new Piece(2,7,'*',0)};
	std::vector<Piece*> p3 = {new Piece(3,0,'*',0), new Piece(3,1,'*',0), new Piece(3,2,'*',0), new Piece(3,3,'*',0), new Piece(3,4,'*',0), new Piece(3,5,'*',0), new Piece(3,6,'*',0), new Piece(3,7,'*',0)};
	std::vector<Piece*> p4 = {new Piece(4,0,'*',0), new Piece(4,1,'*',0), new Piece(4,2,'*',0), new Piece(4,3,'*',0), new Piece(4,4,'*',0), new Piece(4,5,'*',0), new Piece(4,6,'*',0), new Piece(4,7,'*',0)};
	std::vector<Piece*> p5 = {new Piece(5,0,'*',0), new Piece(5,1,'*',0), new Piece(5,2,'*',0), new Piece(5,3,'*',0), new Piece(5,4,'*',0), new Piece(5,5,'*',0), new Piece(5,6,'*',0), new Piece(5,7,'*',0)};

	// allocate Player 2's pawns
	std::vector<Piece*> p6 = {new Pawn(6,0,2), new Pawn(6,1,2), new Pawn(6,2,2), new Pawn(6,3,2), new Pawn(6,4,2), new Pawn(6,5,2), new Pawn(6,6,2), new Pawn(6,7,2)};
	// allocate Player 2's special pieces
	std::vector<Piece*> p7 = {new Rook(0,7,2), new Knight(7,1,2), new Bishop(7,2,2), new Queen(7,4,2), new King(0,5,2), new Bishop(7,5,2), new Knight(7,6,2), new Rook(7,7,2)};
	
	// populate the board with pieces
	this->board.push_back(p0); this->board.push_back(p1);
	this->board.push_back(p2); this->board.push_back(p3);
	this->board.push_back(p4); this->board.push_back(p5);
	this->board.push_back(p6); this->board.push_back(p7);
}

Board::~Board() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
			delete this->board[i][j];
	}
}

void Board::Display() {
	// display the board
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
			this->board[i][j]->PrintPiece();
		std::cout << std::endl;
	}
}

int Board::OffBoard(int x1, int y1, int x2, int y2) {
	return (x1 > 7 || x1 < 0 || x2 > 7 || x2 < 0 || y1 > 7 || y1 < 0 || y2 > 7 || y2 < 0);
}

int Board::CanMakeMove(int currPlayer, int x1, int y1, int x2, int y2) {
	// check if coordinate goes off the board
	if (this->OffBoard(x1, y1, x2, y2))
		return 0;
	// FIXME: check type of piece at coord and see if it can be moved
	// FIXME: make sure the piece we're moving belongs is owned by the current player
	std::cout << this->board[x1][y1]->owner << ", " << currPlayer << std::endl;
	if (this->board[x1][y1]->owner != currPlayer)
		return 0;
	// FIXME: take into account whether other pieces are in the way
	return this->board[x1][y1]->CanMove(x2, y2);
}

void Board::MakeMove(Piece* piece, int currPlayer, int new_x, int new_y) {
	// update position with empty cell
	this->board[piece->GetX()][piece->GetY()] = this->board[new_x][new_y];
	// update empty cell's coordinates
	this->board[piece->GetX()][piece->GetY()]->Move(piece->GetX(), piece->GetY());
	// update move the piece on the board
	this->board[new_x][new_y] = piece;
	// update the piece's coordinates
	piece->Move(new_x, new_y);
}
