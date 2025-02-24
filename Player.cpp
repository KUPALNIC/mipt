#include "Player.h"
#include <iostream>
using namespace std;
Player::Player(int h, int f, int r, int s, int d): Units(),  hp(h), food(f), reputation(r), sleeping(s), debts(d) {
    cout << "Player created, enter a name: ";
    cin >> name;
}

void Player::voice() {
    cout << "Player voiced!" << endl;
}
void Player::sleep(int hours) {
    cout << "Player sleeping!" << endl;
    sleeping += hours;
}
void Player::eat(int meal) {
    cout << "Mmmm... delisious!" << endl;
    food += meal;
}
void Player::do_hometask(int count) {
    cout << "Player doing hometask!" << endl;
    debts -= count;
}




