#include "player.h"
#include "grid.h"
#include "ball.h"
#include <cstdlib>



int main() {
  //first we create the balls with random positions
  int maxsize = (rand()%50)+1;
  Ball ballOne(rand()%maxsize , rand()%maxsize);
  Ball ballTwo(rand()%maxsize , rand()%maxsize);
  //create the players
  Player playerOne(ballOne);
  Player playerTwo(ballTwo);
  //create the Grid
  Ball balls[2] = {ballOne, ballTwo};
  Player players[2] = {playerOne, playerTwo};
  Grid gridOne(maxsize, balls, players);
  gridOne.startGame();
  return 0;
}
