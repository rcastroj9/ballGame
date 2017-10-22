#ifndef BALL
#define BALL
class Ball{
  int x;
  int y;
public:
  Ball(int xCor, int yCor); //constructor
  void move(int xCor, int yCor);
  int* givePos();
};

#endif
