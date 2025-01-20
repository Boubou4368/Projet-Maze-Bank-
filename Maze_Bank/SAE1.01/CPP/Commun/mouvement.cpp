#include"../../H/colision.h"
#include"../../H/deplacementAleatoire.h"
#include"../../H/mouvement.h"
using namespace std;

// le robot se deplace en fonction des huits positions differentes 
//auxquels peut se trouver le jouer par rapport au robot

CPosition mouvement(CMatrix & Carte,CPosition & coordP,CPosition & coordV,int coup){
    srand(time(nullptr));
    //test les cas ou l'objectif est au moins alignée sur un axe vertical
    if (coordP.first == coordV.first ){
        if (coordV.second>coordP.second){
            if (colision(coordP,Carte,'s')==true){
                coordP.second+=1;
                return coordP;
            }
            else{coordP=deplacementAleatoire(coordP,Carte);}
        }
        else{
            if (colision(coordP,Carte,'z')==true){
                coordP.second-=1;
                return coordP;
            }
            else{
                coordP=deplacementAleatoire(coordP,Carte);
            }
        }
    }
    // test les cas ou l'objectif est au moins alignée sur un axe horizontal
    else if (coordP.second == coordV.second){
        if (coordV.first>coordP.first){
            if (colision(coordP,Carte,'d')==true){
                coordP.first+=1;
                return coordP;
            }
            else{
                coordP=deplacementAleatoire(coordP,Carte);
                return coordP;
            }
        }
        else{
            if (colision(coordP,Carte,'q')==true){
                coordP.first-=1;
                return coordP;
            }
            else{
                coordP=deplacementAleatoire(coordP,Carte);
                return coordP;
            }
        }
    }
    //test les cas ou l'objectif est en diagonal
    else if (coordV.first>coordP.first || coordV.second>coordP.second){
        if (coup%2==0){
            if (colision(coordP,Carte,'d')==true){
                coordP.first+=1;
                return coordP;
            }
            else{
                coordP=deplacementAleatoire(coordP,Carte);
                return coordP;
            }
        }
        else{
            if (colision(coordP,Carte,'s')==true){
                coordP.second+=1;
                return coordP;
            }
            else{
                coordP=deplacementAleatoire(coordP,Carte);
                return coordP;
            }
        }
    }
    else if (coordV.first<coordP.first || coordV.second<coordP.second){
        if (coup%2==0){
            if (colision(coordP,Carte,'q')==true){
                coordP.first-=1;
                return coordP;
            }
            else{
                coordP=deplacementAleatoire(coordP,Carte);
                return coordP;
            }
        }
        else{
            if (colision(coordP,Carte,'z')==true){
                coordP.second-=1;
                return coordP;
            }
            else{
                coordP=deplacementAleatoire(coordP,Carte);
                return coordP;
            }
        }
    }
    else if (coordV.first<coordP.first || coordV.second>coordP.second){
        if (coup%2==0){
            if (colision(coordP,Carte,'q')==true){
                coordP.first-=1;
                return coordP;
            }
            else{
                coordP=deplacementAleatoire(coordP,Carte);
                return coordP;
            }
        }
        else{
            if (colision(coordP,Carte,'z')==true){
                coordP.second-=1;
                return coordP;
            }
            else{
                coordP=deplacementAleatoire(coordP,Carte);
                return coordP;
            }
        }
    }
    else if (coordV.first>coordP.first || coordV.second<coordP.second){
        if (coup%2==0){
            if (colision(coordP,Carte,'d')==true){
                coordP.first+=1;
                return coordP;
            }
            else{
                coordP=deplacementAleatoire(coordP,Carte);
                return coordP;
            }
        }
        else{
            if (colision(coordP,Carte,'z')==true){
                coordP.second-=1;
                return coordP;
            }
            else{
                coordP=deplacementAleatoire(coordP,Carte);
                return coordP;
            }
        }
    }
    return coordP;
}