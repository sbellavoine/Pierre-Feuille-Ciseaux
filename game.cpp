#include "game.h"
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
    int tour = 1;
    int score1= 0;
    int score2= 0;
    while (true)
    {
        cout << "Bienvenue dans ce Pierre-Feuille-Ciseaux, " << j1.getNom() << "!" << endl;
        // Logique du jeu à implémenter ici
        cout << "Tour n° " << tour << " : " << endl;
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