#include "Piece.hpp"

Piece::Piece(int x, int y, char rep, int owner) : coords(x, y), repr(rep), owner(owner) {}

Piece::~Piece() {}

void Piece::Move(int x, int y) {
	this->coords.first = x; this->coords.second = y;
}

int Piece::CanMove(int x, int y) {
	return 1;
}

void Piece::PrintPiece() {
	if (this->owner == 1)
		std::cout << BLUE << this->repr << RESET << " ";
	else if (this-> owner == 2)
		std::cout << GREEN << this->repr << RESET << " ";
	else
		std::cout << this->repr << " ";
}

void Piece::PrintPointer() {
	// print the piece's memory address
	printf("%p ", (void*)this);
}

int Piece::GetX() {
	// return the piece's x coordinate 
	return this->coords.first;
}

int Piece::GetY() {
	// return the piece's y coordinate
	return this->coords.second;
}
