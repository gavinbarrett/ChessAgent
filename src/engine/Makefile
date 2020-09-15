CC = g++
CFLAGS = -Wall -Werror -std=c++11

chess: main.o Game.o Board.o Player.o Piece.o Pawn.o Bishop.o Rook.o Knight.o King.o Queen.o
	$(CC) $(CFLAGS) main.o Game.o Board.o Player.o Piece.o Pawn.o Bishop.o Rook.o Knight.o King.o Queen.o -o chess

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

Game.o: Game.cpp Game.hpp
	$(CC) $(CFLAGS) -c Game.cpp

Board.o: Board.cpp Board.hpp
	$(CC) $(CFLAGS) -c Board.cpp

Player.o: Player.cpp Player.hpp
	$(CC) $(CFLAGS) -c Player.cpp

Piece.o: Piece.cpp Piece.hpp
	$(CC) $(CFLAGS) -c Piece.cpp

Pawn.o: Pawn.cpp Pawn.hpp
	$(CC) $(CFLAGS) -c Pawn.cpp

Bishop.o: Bishop.cpp Bishop.hpp
	$(CC) $(CFLAGS) -c Bishop.cpp

Rook.o: Rook.cpp Rook.hpp
	$(CC) $(CFLAGS) -c Rook.cpp

Knight.o: Knight.cpp Knight.hpp
	$(CC) $(CFLAG) -c Knight.cpp

King.o: King.cpp King.hpp
	$(CC) $(CFLAGS) -c King.cpp

Queen.o: Queen.cpp Queen.hpp
	$(CC) $(CFLAGS) -c Queen.cpp

clean:
	rm chess *.o
