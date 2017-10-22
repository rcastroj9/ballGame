#include "ball.h"

class Player{
  int moves;
  Ball ball;
public:
  void move(int xCor, int yCor);
  int getMoves();
  int[2] giveMove();
  Player(int xCor, int yCor);
  Player(Ball newBall); //receive an already created ball, and assign to
                              // its own attribute

};
