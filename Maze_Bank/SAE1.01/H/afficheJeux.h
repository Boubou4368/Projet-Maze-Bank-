#ifndef AFFICHEJEUX_H
#define AFFICHEJEUX_H
#include<iostream>
#include<vector>
using namespace std;
//Type pour ma map.
typedef vector <unsigned> CVLine; // Type représentant une ligne de la grille
typedef vector <CVLine> CMatrix; // Type représentant la grille
typedef pair <unsigned, unsigned> CPosition;
//Map
void afficheJeux(CMatrix & mat,CPosition & police,CPosition & voleur,bool tresor,const char skin);
#endif