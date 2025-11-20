#include "turn.h"
#include <ctime>
#include <iostream>
using namespace std;  

Turn::Turn() : score1(0), score2(0), choix1(0), choix2(0)
{ 
} 

void Turn::jouerTour()
{ 
  while (true)  {
    cout << "Veuillez selectionner 1 pour pierre, 2 pour feuille, 3 pour ciseaux :" << endl;
    cin >> choix1;
    std::srand(std::time(nullptr));   // Initialisation
    choix2 = (std::rand() % 3) + 1; // De 1 à 3
    if (choix1 == choix2) {
        cout << "Egalite!" << endl;
    } else if ((choix1 == 1 && choix2 == 3) || (choix1 == 2 && choix2 == 1) || (choix1 == 3 && choix2 == 2)) {
        cout << "Vous gagnez ce tour!" << endl;
        score1++;
        break;
    } else {
        cout << "L'IA gagne ce tour!" << endl;
        score2++;
        break;
    }
  } 
}

void Turn::afficherScore()
{
    cout << "Score actuel - Joueur: " << score1 << " | IA: " << score2 << endl;
} 