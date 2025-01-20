#include"../../H/gagnee.h"
using namespace std;
// La fonction verifie l'etat de la partie. Si le joueur est éliminé 
//ou s'il a reussi a s'echapper
bool gagnee(pair<unsigned,unsigned> & coordA,pair<unsigned,unsigned>& coordB,bool vol){
    if (coordA.first-coordB.first<=1 && coordA.second - coordB.second<=1){
        return true;
    }
    else if (coordA.first==16 && coordA.second==1 && vol==true){
        return true;
    }
    return false;
}