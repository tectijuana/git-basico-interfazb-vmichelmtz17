#include <iostream>
#include <math.h>
#include <cmath>
/**
 * CAPITULO 3:PROBLEMA 28
 * Introducir X, la longitud de un lado de un
 * triangulo equilatero y calcular su perimetro.
 */

//@Autor    vmmp17

using namespace std;

int main()
{
   double l, p;
    cout << "Escribe la longitud del triangulo equilatero: ";
    cin >> l;
    p = l * 3;
    cout << "El perimetro del triangulo es " << p << endl;
    return 0;
}