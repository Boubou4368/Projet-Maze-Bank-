#include"../../H/clearScreen.h"
#include"../../H/gagnee.h"
#include"../../H/colision.h"
#include"../../H/mouvement.h"
#include"../../H/afficheJeux.h"
#include"../../H/afficheJeux3.h"
#include"../../H/statuTresor.h"
#include"../../H/jeux1p.h"
using namespace std;

CMatrix tilemap = {
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,0,0,0,0,1,1,0,0,0,0,1,1,1,1,1,0,1,1,1,1,1,0,0,0,0,0,0,0,0,1},
        {1,0,1,1,0,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,0,1,1,1,0,1},
        {1,0,1,1,0,0,0,0,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,0,1,1,1,0,1},
        {1,0,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,0,1,1,1,0,1},
        {1,0,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,0,1,1,1,0,1},
        {1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,1,1,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,0,1},
        {1,0,1,1,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,0,1},
        {1,0,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,1,1,0,1},
        {1,0,1,1,0,1,1,0,1,1,0,1,1,0,1,1,1,1,1,0,1,1,0,1,1,0,1,1,1,0,1},
        {1,0,1,1,0,1,1,0,1,1,0,1,1,0,1,1,1,1,1,0,1,1,0,1,1,0,1,1,1,0,1},
        {1,0,0,0,0,1,1,0,0,0,0,1,1,0,1,1,0,1,1,0,0,0,0,1,1,0,0,0,0,0,1},
        {1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,1,1},
        {1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,1,1},
        {1,0,0,0,0,1,1,0,0,0,0,1,1,0,1,1,0,1,1,0,0,0,0,1,1,0,0,0,0,0,1},
        {1,0,1,1,0,1,1,0,1,1,0,1,1,0,1,1,1,1,1,0,1,1,0,1,1,0,1,1,1,0,1},
        {1,0,1,1,0,1,1,0,1,1,0,1,1,0,1,1,1,1,1,0,1,1,0,1,1,0,1,1,1,0,1},
        {1,0,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,1,1,0,1},
        {1,0,1,1,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,0,1},
        {1,0,1,1,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,0,1},
        {1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,0,1,1,1,0,1},
        {1,0,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,0,1,1,1,0,1},
        {1,0,1,1,0,0,0,0,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,0,1,1,1,0,1},
        {1,0,1,1,0,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,0,1,1,1,0,1},
        {1,0,0,0,0,1,1,0,0,0,0,1,1,1,1,1,0,1,1,1,1,1,0,0,0,0,0,0,0,0,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
    };
// Fonction du niveau 1 
int jeux1p(){
    CMatrix Carte;
    Carte = tilemap;
    CPosition voleur = {29,2};
    CPosition police = {1,26};
    clearScreen();
    afficheJeux(Carte,police,voleur,false,'V');
    bool vol = false;
    while(gagnee(voleur,police,vol)==false){
        int score=-1;
        score++;
        cout <<endl<< "z: monter, s: descendre, q: gauche, d: droite : ";
        char control;//touche pressé par le joueur indiquant la direction de son monvement.
        cin >> control;
        if (!vol) {// empeche le changement du statue du tresor, volé ou non
        vol = tresor(voleur);
        }
        switch (control){// synchronise les deplacements entre le joueur et le robot
        case 'z':
            if (colision(voleur,Carte,'z')==true){ // verifie si le deplacement est valide
                voleur.second-=1;
            }
            police = mouvement(Carte,police,voleur,score);// deplace le robot
            break; 
        case 's':
            if (colision(voleur,Carte,'s')==true){// verifie si le deplacement est valide
                voleur.second+=1;
            }
            police = mouvement(Carte,police,voleur,score);// deplace le robot
            break;
        case 'q':
            if (colision(voleur,Carte,'q')==true){// verifie si le deplacement est valide
                voleur.first-=1;
            }
            police = mouvement(Carte,police,voleur,score);// deplace le robot
            break;
        case 'd':
            if (colision(voleur,Carte,'d')==true){// verifie si le deplacement est valide
                voleur.first+=1;
            }
            police = mouvement(Carte,police,voleur,score);// deplace le robot
            break;
        default:
            cout << "Commande invalide. Utilisez : z, s, q, ou d." << endl;
            break;
        }
        clearScreen();
        afficheJeux(Carte,police,voleur,vol,'V');
    }
    clearScreen();
    // Menu de victoire
    if (voleur.first==16 && voleur.second==1){
        afficheJeux(Carte,police,voleur,true,':');
        cout<<endl<<"vous vous etes echappé. Felicitation !!!"<<endl;
    }
    // Menu de defaite 
    else{
        afficheJeux(Carte,police,voleur,false,'X'); 
        cout<<endl<< "Vous avez été pris en flagrant delit !"<<endl;
    }
    return 0;
}