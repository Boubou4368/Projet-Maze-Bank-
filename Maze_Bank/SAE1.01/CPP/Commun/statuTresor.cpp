#include"../../H/statuTresor.h"
using namespace std;
// verifie l'etat du tresor , si le joueur est dessus ou non
bool tresor(CPosition & Voleur){
    if (Voleur.first==16 && Voleur.second== 26){
        return true;
    }
    return false;
}