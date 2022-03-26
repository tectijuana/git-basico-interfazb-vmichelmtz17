#include <iostream>
#include <math.h>
#include <cmath>
/**
 * CAPITULO 3:PROBLEMA 29
 * Determinar el perimetro de un triangulo rec-
 * tangulo, dadas las longitudes de los catetos.
 */

//@Autor    vmmp17

using namespace std;

int main()
{
   double a,c,z;
    cout << "Ingrese los catetos: ";
    cin >> a;
    c= 2 * sqrt(pow(a,2));
    z = (a *2) + c;
    cout << "El perimetro es " << z << endl;
    return 0;
}