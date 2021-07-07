//
// Created by W22443 on 2021-06-26.
//

#include "Card.h"

Card::Card() {
    color = 'w';
    number = 1;
}

Card::Card(int n) {
    if (n % 2 != 0)      //  n이 홀수이면
        color = 'w';
    else                 //  n이 짝수이면
        color = 'b';
    number = n;
}

int Card::front() {
    return number;
}

char Card::back() {
    return color;
}