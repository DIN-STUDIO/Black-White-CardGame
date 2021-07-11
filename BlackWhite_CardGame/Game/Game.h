//
// Created by W22443 on 2021-06-26.
//
#include "../Card/Card.h"
#include "../Player/Player.h"
#ifndef BLACKWHITE_CARDGAME_GAME_H
#define BLACKWHITE_CARDGAME_GAME_H

class Game {
    Player computer;
    Player user;
    int round = 1;
    bool comp_first = true;
    int user_wins = 0;
    int comp_wins = 0;
    int draw = 0;
public:
    void play();
    void advanceRound();
};


#endif //BLACKWHITE_CARDGAME_GAME_H
