#include "Game.hpp"
#include "Board.hpp"
#include <cstdlib>
#include <iostream>
int main() {
	// create two players
	Player* p1 = new Player(1);
	Player* p2 = new Player(2);
	// create a board
	Board* board = new Board();
	// create a game
	Game* game = new Game(p1, p2, board);
	int x = 0;
	while (!game->isOver()) {
		game->board->PrintOut();
		std::cin >> x;
	}
	delete game;
	return 0;
}
