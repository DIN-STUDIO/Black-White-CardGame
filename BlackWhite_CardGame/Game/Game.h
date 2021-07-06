//
// Created by W22443 on 2021-06-26.
//

#ifndef BLACKWHITE_CARDGAME_GAME_H
#define BLACKWHITE_CARDGAME_GAME_H

class Game {
    Player computer;
    Player user;
    int round;
    bool comp_first;
    int user_wins;
    int comp_wins;
public:
    void play();
    void advanceRound();
};


#endif //BLACKWHITE_CARDGAME_GAME_H
