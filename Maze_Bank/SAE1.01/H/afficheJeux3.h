#ifndef AFFICHEJEUX3_H
#define AFFIHCEJEUX3_H
#include<utility>
#include<vector>
#include<iostream>
using namespace std;
typedef vector <unsigned> CVLine; // Type représentant une ligne de la grille
typedef vector <CVLine> CMatrix; // Type représentant la grille
typedef pair <unsigned, unsigned> CPosition;
void afficheJeux3(CMatrix &mat,CPosition & police,
            CPosition & police2,CPosition & police3,CPosition & voleur,bool tresor,const char skin);
#endif