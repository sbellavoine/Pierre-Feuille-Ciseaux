#ifndef GAME_H
#define GAME_H
#include "joueur.h"
#include "turn.h"

class Game{
    private:
        Joueur j1;
        Joueur* currentPlayer;
        Turn turn;

    public:
        Game();
        void start();
        void selectNames();
};

#endif