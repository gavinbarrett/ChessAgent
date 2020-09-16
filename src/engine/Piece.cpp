#include "Piece.hpp"
#include <iostream>
#define BLUE    "\033[34m"
#define GREEN   "\033[32m"
#define RESET   "\033[0m"

Piece::Piece(int x, int y, char rep, int owner) : coords(x, y), repr(rep), owner(owner) {}

Piece::~Piece() {}

void Piece::Move(int x, int y) {
	this->coords.first = x; this->coords.second = y;
}

int Piece::CanMove(int x, int y) {
	return 0;
}

void Piece::PrintPiece() {
	if (this->owner == 1)
		std::cout << BLUE << this->repr << RESET << " ";
	else if (this-> owner == 2)
		std::cout << GREEN << this->repr << RESET << " ";
	else
		std::cout << this->repr << " ";;
}

int Piece::GetX() {
	return this->coords.first;
}

int Piece::GetY() {
	return this->coords.second;
}
