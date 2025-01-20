#include"../../couleur.yaml"
#include"../../H/couleur.h"
#include"../../H/afficheJeux3.h"
using namespace std;

void afficheJeux3(CMatrix &mat,CPosition & police,
            CPosition & police2,CPosition & police3,CPosition & voleur,bool tresor,const char skin){
    cout <<endl;
    for(size_t y = 0; y < mat.size(); y++){
        cout<<endl;
        for (size_t x = 0; x <mat[y].size(); x++){
            couleur(KReset);
            if (x == police.first && y == police.second){//affiche un policier
                couleur(KBleu);
                cout << " P";
            }
            else if (x ==16 && y==26 && tresor == false){//affiche le tresor
                couleur (KJaune);
                cout << " O";
            }
            else if (x ==16 && y==0 && tresor==true){//ouvre le passage apres que le butin ait été recuperé
                cout << "  ";
            }
            else if (x == police2.first && y == police2.second){//affiche un policier
                couleur(KBleu);
                cout << " P";
            }
            else if (x == police3.first && y == police3.second){//affiche un policier
                couleur(KBleu);
                cout << " P";
            }
            else if (x == voleur.first && y == voleur.second){// affiche le jouer
                couleur (KRouge);
                cout << " "<<skin;
            }
            else if (mat[y][x]==0){// affiche les chemins 
                cout << "  "; 
            }
            else if (mat[y][x]==1){// affiche les murs
                cout << "||"; 
            }
            else{
            cout << " "<<  mat[y][x];}
        }
    }
}
