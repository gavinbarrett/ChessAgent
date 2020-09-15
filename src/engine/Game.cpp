#include "Game.hpp"
#include "Player.hpp"

Game::Game(Player* p1, Player* p2, Board* board) : p1(p1), p2(p2), board(board) {}

Game::~Game() {
	delete this->p1;
	delete this->p2;
	delete this->board;
}

int Game::isOver() {
	return (this->p1->checkmated || this->p2->checkmated);
}
