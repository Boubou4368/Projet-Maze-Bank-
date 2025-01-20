#include"../../couleur.yaml"
#include"../../H/couleur.h"
// Fonction fournie par le professeur M.Casali
void couleur (const unsigned & coul) {
    cout << "\033[" << coul <<"m";
}