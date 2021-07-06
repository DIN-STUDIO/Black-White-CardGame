//
// Created by W22443 on 2021-06-26.
//

#ifndef BLACKWHITE_CARDGAME_CARD_H
#define BLACKWHITE_CARDGAME_CARD_H

class Card {
    char color;
    int number;
public:
    Card();
    Card(int n);
    int front();
    char back();
};


#endif //BLACKWHITE_CARDGAME_CARD_H
