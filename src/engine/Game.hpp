#include "Board.hpp"
#include "Player.hpp"

#ifndef GAME_HPP_
#define GAME_HPP_
class Game {
  public:
	Game(Player* p1, Player* p2, Board* board);
	~Game();
  	Player* p1;
	Player* p2;
	Board* board;
  	int isOver();
};
#endif // GAME_HPP_
