//
// Created by W22443 on 2021-06-26.
//

#include <iostream>
#include "../Card/Card.h"
#include "Game.h"
using namespace std;

void Game::play() {
    for (int i = 0; i < 9; i++){
        computer.randomShuffle();

        advanceRound();
    }
    cout << "=======================" << endl;
    cout << "All rounds have ended" << endl;
    cout << "=======================" << endl;
    cout << "User Won " << user_wins << " Times" << endl;
    cout << "Computer Won " << comp_wins << " Times" << endl;

    if (user_wins > comp_wins)
        cout << "Congratulaions! You Won!!! :)\n" << endl;
    else if (user_wins == comp_wins)
        cout << "Wow! Draw~~\n" << endl;
    else
        cout << "You Lose... Cheer up...\n" << endl;

    cout << "User's History\t : ";
    user.printHistory();
    cout << endl;

    cout << "Computer's History\t : ";
    computer.printHistory();
    cout << endl;
    // 최종 승자 가림
    // computer와 user의 카드 히스토리 출력
}

void Game::advanceRound() {
    int num;

    cout << "=======================" << endl;
    cout << "Round : " << round << endl;
    cout << "=======================" << endl;

    cout << "<Computer's cards>" << endl;
    computer.printBack();
    cout << endl;

    cout << "<User's cards>" << endl;
    user.printFront();
    cout << endl;

    if (comp_first == true){
        cout << "Computer's Turn!" << endl;
        cout << "Computer chose : " << computer.choose() << "\n" << endl;

        cout << "Your Turn!" << endl;
        cout << "Which Card will you choose? : ";
        cin >> num;

        while (num < 0 || num > 8){
            cout << "No " << num << " in deck!" << endl;
            cout << "Which Card will you choose? : ";
            cin >> num;
        }
        cout << "User chose : " << user.search(num) << endl;
    }
    else{
        cout << "Your Turn!" << endl;
        cout << "Which Card will you choose? : ";
        cin >> num;

        while (num < 0 || num > 8){
            cout << "No " << num << " in deck!" << endl;
            cout << "Which Card will you choose? : ";
            cin >> num;
        }
        cout << "User chose : " << user.search(num) << endl;

        cout << "Computer's Turn!" << endl;
        cout << "Computer chose : " << computer.choose() << "\n" << endl;
    }
    if (computer.front() > user.front()){
        comp_wins += 1;
        cout << ">>>>> Computer won!" << endl;
    }
    else if (computer.front() == user.front()){
        draw += 1;
        cout << "Draw!" << endl;
    }
    else{
        user_wins += 1;
        cout << ">>>>> User won!\n" << endl;
    }
}
