#include "Board.hpp"

Board::Board() {
	this->board[0][0] = 'R'; this->board[0][7] = 'R';
	this->board[0][1] = 'K'; this->board[0][6] = 'K';
	this->board[0][2] = 'B'; this->board[0][5] = 'B';
	this->board[0][3] = 'Q'; this->board[0][4] = 'K';
	this->board[1][0] = 'P'; this->board[1][7] = 'P';
	this->board[1][1] = 'P'; this->board[1][6] = 'P';
	this->board[1][2] = 'P'; this->board[1][5] = 'P';
	this->board[1][3] = 'P'; this->board[1][4] = 'P';

	this->board[7][0] = 'R'; this->board[7][7] = 'R';
	this->board[7][1] = 'K'; this->board[7][6] = 'K';
	this->board[7][2] = 'B'; this->board[7][5] = 'B';
	this->board[7][3] = 'Q'; this->board[7][4] = 'K';
	this->board[6][0] = 'P'; this->board[6][7] = 'P';
	this->board[6][1] = 'P'; this->board[6][6] = 'P';
	this->board[6][2] = 'P'; this->board[6][5] = 'P';
	this->board[6][3] = 'P'; this->board[6][4] = 'P';
}

Board::~Board() {
	return;
}

void Board::PrintOut() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
			std::cout << this->board[i][j] << " ";
		std::cout << std::endl;
	}
}
