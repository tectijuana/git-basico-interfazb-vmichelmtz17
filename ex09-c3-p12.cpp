#include <iostream>
#include <math.h>
#include <cmath>
/**
 * CAPITULO 3:PROBLEMA 12
 * La suma de los angulos de un triangulo es
 * 180. Introducir dos angulos A y B y calcular
 * el valor del tercer angulo C. El programa debe
 * verificar para un tercer valor que es cero ne-
 * gativo y si cualquiera de ellos existe, imprimir
 * el mensaje NO ES UN TRIANGULO.
*/

//@Autor    vmmp17
using namespace std;

int main()
{
    double a, b, c, d;
    cout << "Escribir el angulo A: ";
    cin >> a;
    cout << "Escribir el angulo B: ";
    cin >> b;
    c = 180 - (a + b);
    d = a + b + c;
    if (d != 180)
    {
        cout << "NO ES UN TRIANGULO" << endl;
    }
        return 0;
}