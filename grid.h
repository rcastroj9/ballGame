#ifndef GRID
#define GRID
#include "player.h"
#include "ball.h"

class Grid{
  Ball *balls;
  int size;
  Player *players;
  int currentPlayer;
public:
  void checkWin();
  Player nextPlayer();
  bool validMove(int xCor, int yCor);
  void startGame();
  Grid(int size, Ball *balls, Player *players);
};

#endif
