#ifndef TURN_H
#define TURN_H
#include <string>
using namespace std;

class Turn {
    private :
        int score1;
        int score2;
        int choix1;
        int choix2;
        int choix3;
    public:
        Turn();
        void jouerTour();
        void afficherScore();
        
};

#endif