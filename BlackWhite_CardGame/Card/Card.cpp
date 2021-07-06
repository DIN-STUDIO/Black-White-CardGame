//
// Created by W22443 on 2021-06-26.
//

#include "Card.h"

Card::Card() {
    color = 'w';
    number = 1;
}

Card::Card(int n) {
    color = 'w';
    number = n;
}

int Card::front() {
    return number;
}

char Card::back() {
    return color;
}