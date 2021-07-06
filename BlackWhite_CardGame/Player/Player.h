//
// Created by W22443 on 2021-06-26.
//

#ifndef BLACKWHITE_CARDGAME_PLAYER_H
#define BLACKWHITE_CARDGAME_PLAYER_H

class Player {
    Card* deck;
    int num_card;
    int history[9];
public:
    Player();
    void randomShuffle();
    Card choose(int);
    int search(int);
    void printFront();
    void printBack();
    void printHistory();
    ~Player();
};


#endif //BLACKWHITE_CARDGAME_PLAYER_H
