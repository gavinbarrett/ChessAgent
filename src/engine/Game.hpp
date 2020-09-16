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
	int IsOver();
	void Display();
	void Play();
	void PrintPrompt();
	void SwitchPlayer();
	int currPlayer = 1;
};
#endif // GAME_HPP_
