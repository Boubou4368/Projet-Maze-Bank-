#include <iostream>
#include "../../H/jeux1p.h"
#include "../../H/jeux3p.h"
using namespace std;

// Menu de selection du niveau
int main(){
    cout << "choisi ta difficultée"<<endl;
    cout << "niveau 1 : 1 policier"<<endl;
    cout << "niveau 2 : 3 policiers"<<endl;
    cout << "1 ou 2 : "<<endl;
    char niv;
    cin >> niv;
    switch (niv)
    {
    case '1':
        jeux1p();
        break;
    case '2':
        jeux2p();
        break;
    }
    return 0;
}