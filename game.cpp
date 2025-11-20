#include "game.h"
#include "turn.h"
#include <iostream>
using namespace std;

Game::Game() : j1()
{
}

void Game::selectNames()
{
    cout << "Veuillez saisir votre nom : ";
    string name1;
    cin >> name1;
    j1.setNom(name1);
}

void Game::start()
{
    cout << "Bienvenue dans ce Pierre-Feuille-Ciseaux, " << j1.getNom() << "!" << endl;
    int tour = 1;
    while (true)
    {
        // Logique du jeu à implémenter ici
        cout << "Tour # " << tour << " : " << endl;
        turn.jouerTour();
        turn.afficherScore();
        int score1 = turn.getScore1();
        int score2 = turn.getScore2();
        if (score1 >= 3) {
            cout << j1.getNom() << " a gagne la partie!" << endl;
            break;
        }
        if (score2 >= 3) {
            cout << "L'IA a gagne la partie!" << endl;
            break;
        }
        tour++;
    }
}