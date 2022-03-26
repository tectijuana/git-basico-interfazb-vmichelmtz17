#include <iostream>
#include <math.h>
#include <cmath>
/**
 * CAPITULO 3:PROBLEMA 9
 * Encontrar el tercer lado de un triangulo rec-
 * tangulo mediante el teorema de Pitagoras.
*/

//@Autor    vmmp17
using namespace std;

int main()
{
    double a, b, c, d;
    cout << "Ingrese el valor del angulo A: ";
    cin >> a;
    cout << "Ingrese el valor del angulo B: ";
    cin >> b;
    c = 180.00 - a;
    d = 180 - (a + b + c);
    cout << c;
    cout << d;
    return 0;
}