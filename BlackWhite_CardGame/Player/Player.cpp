//
// Created by W22443 on 2021-06-26.
//

//#include "Card.h"
#include <iostream>
#include <windows.h>
#include "Player.h"
using namespace std;

Player::Player() {
    deck = new Card[num_card];

    for (int i = 0; i < num_card; i++)
        deck[i] = Card(i);

    num_card = 9;
    history[9] = {0,};
}

void Player::randomShuffle() {
    srand(GetTickCount());

    Card temp[num_card];

    int random_num[num_card];

    for (int i = 0; i < num_card; i++){
        if (i == 0)
            random_num[i] = rand() % num_card;
        else{
            random_num[i] = rand() % num_card;

            while (random_num[i] == random_num[i - 1])
                random_num[i] = rand() % num_card;
        }
    }
    for (int j = 0; j < num_card; j++){
        temp[j] = deck[j];
        deck[j] = deck[random_num[j]];
        deck[random_num[j]] = temp[j];
    }
}

Card Player::choose(int n) {     //  ex ) computer chose : [w]
    // 동적 생성된 객체 배열을 어떻게 삭제....?

    return deck[n];
}

int Player::search(int n) {
    for (int i = 0; i < num_card; i++) {
        if (n == deck[i].front()) {
            return i;
            break;
        }
    }
}

void Player::printFront() {
    for (int j = 0; j < num_card; j++)
        cout << " [" << deck[j].front() << "] ";
}

void Player::printBack() {
    for (int k = 0; k < num_card; k++)
        cout << " [" << deck[k].back() << "] ";
}

void Player::printHistory() {
    for (int i = 0; i < 9; i++){
        cout << history[i] << " ";
    }
}

Player::~Player() {
    if (deck)
        delete[] deck;
}