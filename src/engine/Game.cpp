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

	this->Display();

	// FIXME: handle user input
	getline(std::cin, str);
	std::istringstream is(str);
	do {
		is >> x;
		
		arrs.push_back(x);
	} while(arrs.size() != 4);
	

	// check if move is valid
	int canMove = this->board->CanMakeMove(this->currPlayer, arrs[0], arrs[1], arrs[2], arrs[3]);
	
	// make move if possible
	if (canMove) {
		std::cout << "Moving\n";
		// grab the piece 
		Piece* piece = this->board->board.at(arrs[0]).at(arrs[1]);
		// move the piece
		this->board->MakeMove(piece, this->currPlayer, arrs[2], arrs[3]);
		// switch player for next turn
		this->SwitchPlayer();
	} else {
		std::cout << "Cannot move to specified location.\n";
	}
}

void Game::Display() {
	// print the game board
	this->board->Display();
	// print the prompt to the player
	this->PrintPrompt();
}

void Game::PrintPrompt() {
	std::cout << "\nIt is player " << this->currPlayer << "'s turn.\nPlease enter move coordinates.\n"; 
}

void Game::SwitchPlayer() {
	// alternate the current player
	(this->currPlayer == 1) ? (this->currPlayer = 2) : (this->currPlayer = 1);
}

int Game::IsOver() {
	return (this->p1->checkmated || this->p2->checkmated);
}
