#ifndef STATUTRESOR_H
#define STATUTRESOR_H
#include <vector>
using namespace std; 
typedef vector <unsigned> CVLine; // Type représentant une ligne de la grille
typedef pair <unsigned, unsigned> CPosition;
bool tresor(CPosition & Voleur);
#endif