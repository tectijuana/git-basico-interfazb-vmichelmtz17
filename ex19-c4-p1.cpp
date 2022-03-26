#include <iostream>
#ifndef MPI
#define MPI 3.1416
#endif
/**
 * CAPITULO 4:PROBLEMA 1
 * Pasar de grados a radianes, usando multiplos 
 * de 10, desde 0 hasta 360.
 */

//@Autor    vmmp17

using namespace std;
int main()
{
    int grados = 0;
    for (grados; grados <= 360; grados++) {
        if (grados % 10 == 0) {
            cout << "Grados: " << grados << " a decimales " << (grados * MPI) / 180 << endl;
        }
    }
}