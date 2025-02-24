#pragma once

#include "Units.h"
#include <iostream>
#include <string>

using namespace std;

class Player: public Units{
  private:
    int hp;
    int food;
    int reputation;
    int sleeping;
    int debts;
public:
    // Player();
    Player(int h, int f, int r, int s, int d);
    void voice() override;
    void sleep(int hours);
    void eat(int meal);
    void do_hometask(int count);

};
