#include"../../H/colision.h"
//verifie si le deplacement envisagé est valide
bool colision(CPosition & coord,const CMatrix& Mat,const char dir){
    switch(dir){
        case 'z':
        if (Mat[coord.second-1][coord.first]==1){
            return false;
        }
        return true;
        case 'q':
        if (Mat[coord.second][coord.first-1]==1){
            return false;
        }
        return true;
        case 's':
        if (Mat[coord.second+1][coord.first]==1){
            return false;
        }
        return true;
        case 'd':
        if (Mat[coord.second][coord.first+1]==1){
            return false;
        }
        return true;
    }
    return false;

}

