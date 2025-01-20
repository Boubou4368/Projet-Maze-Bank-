#ifndef MOUVEMENT_H
#define MOUVEMENT_H
#include <utility>
#include <vector>
#include <iostream>
#include <ctime>
using namespace std;
//Type pour ma map.
typedef vector <unsigned> CVLine; // Type représentant une ligne de la grille
typedef vector <CVLine> CMatrix; // Type représentant la grille
typedef pair <unsigned, unsigned> CPosition;
//Map
CPosition mouvement(CMatrix & Carte,CPosition & coordP,CPosition & coordV,int coup);
#endif