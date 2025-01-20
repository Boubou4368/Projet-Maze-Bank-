#include"../../H/clearScreen.h"
#include"../../H/gagnee3.h"
#include"../../H/colision.h"
#include"../../H/mouvement.h"
#include"../../H/afficheJeux3.h"
#include"../../H/statuTresor.h"
#include"../../H/jeux3p.h"
#include"../../H/Carte.H"

CMatrix tilemap3 = {
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

// Fonction du niveau 2
int jeux2p (){
    CMatrix Carte;
    Carte = tilemap3;
    CPosition voleur = {29,2};
    CPosition police1 = {1,26};
    CPosition police2 = {29,26};
    CPosition police3 = {1,2};
    clearScreen();
    afficheJeux3(Carte,police1,police2,police3,voleur,false,'V');
    bool vol = false;
    while(gagnee3(voleur,police1,police2,police3,vol)==false){
        int score=-1;
        score++;
        cout <<endl<< "z: monter, s: descendre, q: gauche, d: droite : ";
        char control;//touche pressé par le joueur indiquant la direction de son monvement.
        cin >> control;
        if (!vol) { // empeche le changement du statue du tresor, volé ou non
        vol = tresor(voleur);
        }
        switch (control){// synchronise les deplacements entre le joueur et le robot
        case 'z':
            if (colision(voleur,Carte,'z')==true){ // verifie si le deplacement est valide
                voleur.second-=1;
            }
            police1 = mouvement(Carte,police1,voleur,score);  // deplace les robots
            police2 = mouvement(Carte,police2,voleur,score);
            police3 = mouvement(Carte,police3,voleur,score);
            break; 
        case 's':
            if (colision(voleur,Carte,'s')==true){ // verifie si le deplacement est valide
                voleur.second+=1;
            }
            police1 = mouvement(Carte,police1,voleur,score);  // deplace les robots
            police2 = mouvement(Carte,police2,voleur,score);
            police3 = mouvement(Carte,police3,voleur,score);
            break;
        case 'q':
            if (colision(voleur,Carte,'q')==true){ // verifie si le deplacement est valide
                voleur.first-=1;
            }
            police1 = mouvement(Carte,police1,voleur,score);  // deplace les robots
            police2 = mouvement(Carte,police2,voleur,score);
            police3 = mouvement(Carte,police3,voleur,score);
            break;
        case 'd':
            if (colision(voleur,Carte,'d')==true){ // verifie si le deplacement est valide
                voleur.first+=1;
            }
            police1 = mouvement(Carte,police1,voleur,score);  // deplace les robots
            police2 = mouvement(Carte,police2,voleur,score);
            police3 = mouvement(Carte,police3,voleur,score);
            break;
        default:
            cout << "Commande invalide. Utilisez : z, s, q, ou d." << endl;
            break;
        }
        clearScreen();
        afficheJeux3(Carte,police1,police2,police3,voleur,vol,'V');
    }
    clearScreen();
    // Menu de victoire
    if (voleur.first==16 && voleur.second==1){
        afficheJeux3(Carte,police1,police2,police3,voleur,true,':');
        cout<<endl<<"vous vous etes echappé. Felicitation !!!"<<endl;
    }
    // Menu de defaite 
    else{
        afficheJeux3(Carte,police1,police2,police3,voleur,false,'X');
        cout<<endl<< "Vous avez été pris en flagrant delit !"<<endl;
    }
    return 0;
}