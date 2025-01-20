#include <vector>
#include <utility>
using namespace std;
//Type pour ma map.
typedef vector <unsigned> CVLine; // Type représentant une ligne de la grille
typedef vector <CVLine> CMatrix; // Type représentant la grille
typedef pair <unsigned, unsigned> CPosition;
//Map
CMatrix CarteTest1 = {{1,1,1,1,1,1},
                     {1,0,0,0,1,1},
                     {1,0,0,0,0,1},
                     {1,0,0,1,1,1},
                     {1,0,0,1,0,1},
                     {1,1,1,1,1,1}};

CMatrix CarteTest2 = {{1,1,1,1,1,1},
                     {1,0,0,0,1,1},
                     {1,0,0,0,0,1},
                     {1,0,0,1,1,1},
                     {1,0,0,1,0,1},
                     {1,1,1,1,1,1}};
//Carte du niveau 1

