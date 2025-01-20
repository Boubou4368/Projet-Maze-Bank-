#ifndef COLISION_H
#define COLISION_H
#include<iostream>
#include<utility>
#include<vector>
using namespace std;
//Type pour ma map.
typedef vector <unsigned> CVLine; // Type représentant une ligne de la grille
typedef vector <CVLine> CMatrix; // Type représentant la grille
typedef pair <unsigned, unsigned> CPosition;
//Map
bool colision(CPosition & coord,const CMatrix& Mat,const char dir);
#endif