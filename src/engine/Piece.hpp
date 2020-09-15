#include <utility>

#ifndef PIECE_HPP_
#define PIECE_HPP_
class Piece {
  public:
  	Piece(int x, int y);
	~Piece();
	void Move(int x, int y);
  protected:
  	std::pair<int,int> coords;
};
#endif // PIECE_HPP_
