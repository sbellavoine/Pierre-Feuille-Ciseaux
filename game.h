#ifndef GAME_H
#define GAME_H
#include "joueur.h"

class Game{
    private:
        Joueur j1;
        Joueur* currentPlayer;

    public:
        Game();
        void start();
        void selectNames();
};

#endif