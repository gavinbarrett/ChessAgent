#ifndef PLAYER_HPP_
#define PLAYER_HPP_
class Player {
  public:
  	Player(int playerID);
	~Player();
  	int canMakeMove();
	void makeMove();
  	int playerID;
	int castled = 0;
	int checkmated = 0;
};
#endif // PLAYER_HPP_
