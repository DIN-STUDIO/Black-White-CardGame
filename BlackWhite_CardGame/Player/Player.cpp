//
// Created by W22443 on 2021-06-26.
//

//#include "Card.h"
#include <iostream>
#include <windows.h>
#include "Player.h"

Player::Player() {
    deck = new Card[num_card];

    for (int i = 0; i < num_card; i++)
        deck[i] = Card(i);

    num_card = 9;
    history[9] = {0,};
}

void Player::randomShuffle() {
    srand(GetTickCount());

    Card* temp = new Card[num_card];

    int random_num[num_card];

    for (int i = 0; i < num_card; i++){
        random_num[i] = rand() % num_card;

        temp[i] = deck[i];

    }




}

Card Player::choose(int) {

}

int Player::search(int) {

}

void Player::printFront() {

}

void Player::printBack() {

}

void Player::printHistory() {

}

Player::~Player() {

}