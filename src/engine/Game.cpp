#include "Game.hpp"
#include "Player.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

Game::Game(Player* p1, Player* p2, Board* board) : p1(p1), p2(p2), board(board) {}

Game::~Game() {
	delete this->p1;
	delete this->p2;
	delete this->board;
}

void Game::Play() {
	int x = 0;
	std::vector<int> arrs;
	std::string str;
	this->board->Display();

	std::cout << "\nIt is player " << this->currPlayer << "'s turn.\n"; 
	getline(std::cin, str);
	std::istringstream is(str);
	while(arrs.size() != 4) {
		std::cin >> x;
		arrs.push_back(x);
	}
	for (int i = 0; i < static_cast<int>(arrs.size()); i++) {
		std::cout << arrs[i] << std::endl;
	}
	int s = this->board->CanMakeMove(arrs[0], arrs[1], arrs[2], arrs[3]);
	std::cout << s << std::endl;
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
