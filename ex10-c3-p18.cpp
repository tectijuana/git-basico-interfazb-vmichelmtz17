#include <iostream>
#include <math.h>
#include <cmath>
/**
 * CAPITULO 3:PROBLEMA 18
 * Introducir las longitudes de los catetos de un
 * triangulo rectangulo y calcular el perimetro.
*/

//@Autor    vmmp17

using namespace std;

int main()
{
    double a, b, c, d;
    cout << "Anotar el valor de los catetos: ";
    cin >> a >> b;
    c = sqrt(pow(a, 2) + pow(b, 2));
    d = a + b + c;
    cout << "El perimetro del Triangulo es: " << d << endl;
    return 0;
}