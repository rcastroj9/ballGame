#include "ball.h"

  int* Ball::givePos(){
    int *pos = new int[2];
    pos[0] = this->x;
    pos[1] = this->y;
    return pos;
  }

// updates the position when called to move
  void Ball::move(int xCor, int yCor){
    this->x = xCor;
    this->y = yCor;
  }

//constructor, sets y and x
  Ball::Ball(int xCor, int yCor){
    this->x = xCor;
    this->y = yCor;
  }
