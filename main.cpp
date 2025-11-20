#include <iostream>
#include "joueur.h"
#include "game.h"
using namespace std;

int main()
{
    Game game;
    game.selectNames();
    game.start();
    system("pause");
    return 0;
}