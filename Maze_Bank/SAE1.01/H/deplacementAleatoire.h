#ifndef DEPLACEMENTALEATOIRE_H
#define DEPLACEMENTALEATOIRE_H
#include <utility>
#include <vector>
#include<iostream>
#include <ctime>
using namespace std;
typedef vector <unsigned> CVLine; // Type représentant une ligne de la grille
typedef vector <CVLine> CMatrix; // Type représentant la grille
typedef pair <unsigned, unsigned> CPosition;

CPosition deplacementAleatoire(CPosition & coordP,CMatrix & Carte);
#endif