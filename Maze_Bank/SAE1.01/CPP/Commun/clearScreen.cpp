#include"../../H/clearScreen.h"
// Fonction fournie par le professeur M.Casali
void clearScreen () {
    cout << "\033[H\033[2J";
}