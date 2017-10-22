#include "player.h"
#include "ball.h"
#include <iostream>

 using namespace std;
//instruct the ball to move
void Player::move(int xCor, int yCor){
  ball.move(xCor, yCor);
  moves++;
}

//returns the number of moves the user has moved
int Player::getMoves(){
  return this->moves;
}

//read position that user wants to move
//check if the move is valid
//get current position
//pass inteded move to grid
int* Player::giveMove(){
  int pos;
  cout << "Where do you want to move? (It has to be between 1 and 4)" << endl;
  cin  >> pos;
  if (1 <= pos && pos <= 4){
    int *posArr = ball.givePos();
    if(pos == 1){
      posArr[0]--;
    }else if(pos == 2){
      posArr[1]--;
    }else if(pos == 3){
      posArr[1]++;
    }else {
      posArr[0]++;
    }
    return posArr;
  }else{
    cout << "invalid move, please try again" << endl;
    giveMove();
  }
}

//constructor that creates a ball for the Player at xCor and yCor
//initalizes the number of moves the player has : 0
Player::Player(int xCor, int yCor):ball(Ball(xCor, yCor)), moves(0){
}

Player::Player(Ball newBall) ball(newBall){

}
