#include "Game.hpp"
#include "Player.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

// Construct a Game object
Game::Game(Player* p1, Player* p2, Board* board) : p1(p1), p2(p2), board(board) {}

Game::~Game() {
	// Free the player and board objects
	delete this->p1;
	delete this->p2;
	delete this->board;
}

void Game::Play() {
	// Run the main game loop
	int x = 0;
	std::vector<int> arrs;
	std::string str;
	this->board->Display();

	std::cout << "\nIt is player " << this->currPlayer << "'s turn.\n"; 


	// FIXME: handle user input
	getline(std::cin, str);
	std::istringstream is(str);
	do {
		is >> x;
		
		arrs.push_back(x);
	} while(arrs.size() != 4);
	


	int canMove = this->board->CanMakeMove(arrs[0], arrs[1], arrs[2], arrs[3]);
	
	if (canMove) {
		// FIXME: move character on board and update coords
		std::cout << "Moving\n";
		Piece* piece = this->board->board.at(arrs[0]).at(arrs[1]);
		this->board->MakeMove(piece, arrs[2], arrs[3]);
	}

	// switch player for next turn
	this->SwitchPlayer();
}

void Game::SwitchPlayer() {
	// alternate the current player
	(this->currPlayer == 1) ? (this->currPlayer = 2) : (this->currPlayer = 1);
}

int Game::IsOver() {
	return (this->p1->checkmated || this->p2->checkmated);
}
