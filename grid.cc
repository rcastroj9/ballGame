#include "player.h"
#include "ball.h"

//checks if any of the players has won
bool Grid::checkWin(){
  for (int i = 0; i < 2; i++) {
    if(player[i].getMoves() == 50){
      cout << "Congrats Player" << i++;
      return true;
    }
  }
  return false;
}

Player Grid::nextPlayer(){
  if(this->currentPlayer == 0){
    this->currentPlayer = 1;
    return this->players[1];
  }else{
    this->currentPlayer = 0;
    return this->players[0];
  }
}

//checks if the player want to make a valid move
bool Grid::validMove(int xCor, int yCor){
  if(xCor > this->size || xCor < 1){
    return false;
  }else if(yCor > this->size || yCor < 1){
    return false;
  }else{
    return true;
  }
}
void Grid::startGame(){
  while(!checkWin()){
    //get the player whos next
    Player player = nextPlayer();
    //get the move she wants to do
    int[] move = player.giveMove();
    //check if valid
    bool valid = validMove(move[0], move[1]);
    //tell player it can move ball, player tells ball to update
    if(valid){
      player.move(move[0], move[1]);
    }
    //GO again
  }

}

Grid::Grid(int size, Ball[] balls, Player[] players);
  this->currentPlayer = 0;
  this->balls = balls;
  this->players = players;
  this->size = size;
}
