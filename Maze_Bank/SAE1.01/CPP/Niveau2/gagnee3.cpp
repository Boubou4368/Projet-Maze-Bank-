#include"../../H/gagnee3.h"
using namespace std;

// La fonction verifie l'etat de la partie. Si le joueur est éliminé 
//ou s'il a reussi a s'echapper
bool gagnee3(pair<unsigned,unsigned> & coordA,pair<unsigned,unsigned> & coordB,pair<unsigned,unsigned> & coordC,pair<unsigned,unsigned> & coordD,bool vol){
    if (coordA.first-coordB.first<=1 && coordA.second - coordB.second<=1){
        return true;
    }
    else if (coordA.first-coordC.first<=1 && coordA.second - coordC.second<=1){
        return true;
    }
    else if (coordA.first-coordD.first<=1 && coordA.second - coordD.second<=1){
        return true;
    }
    else if (coordA.first==16 && coordA.second==1 && vol==true){
        return true;
    }
    return false;
}