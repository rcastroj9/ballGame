#include "ball.h"

  int[] Ball::givePos(){
    int pos[2] = {this->x, this->y};
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
