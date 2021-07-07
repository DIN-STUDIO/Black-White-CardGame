#include <iostream>
#include <windows.h>
#include "Game/Game.h"

using namespace std;

int main() {
    srand(GetTickCount());

    Game g;

    g.play();

    return 0;
}
