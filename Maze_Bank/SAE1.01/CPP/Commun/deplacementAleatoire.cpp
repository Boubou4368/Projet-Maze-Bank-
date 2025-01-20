#include"../../H/deplacementAleatoire.h"
#include"../../H/colision.h"

// Deplace le robot choisi en fonction de l'envirronement
CPosition deplacementAleatoire(CPosition & coordP,CMatrix & Carte){
    srand(time(nullptr));
    vector<unsigned> chemins (4,1);
    vector <char> dir = {'z','q','s','d'};
    for(unsigned i(0); i<4;i++){
        if (colision(coordP,Carte,dir[i])==true){
            chemins[i]=0;
        }
    }
    while(true){
        int random=rand()% 4;
        if (chemins[random]==0){
            switch (random){
                case 0:
                    coordP.second-=1;
                    return coordP;
                    break;
                case 1:
                    coordP.first-=1;
                    return coordP;
                    break;
                case 2:
                    coordP.second+=1;
                    return coordP;
                    break;
                case 3:
                    coordP.first+=1;
                    return coordP;
                    break;
            }
        }
    }
    return coordP;
}