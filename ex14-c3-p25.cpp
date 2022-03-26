#include <iostream>
#include <math.h>
/**
 * CAPITULO 3:PROBLEMA 25
 * Introducir B, la base y H, la alura de un trian-
 * gulo y determinar el area.
 */

//@Autor    vmmp17

using namespace std;

float B, H, res;
float areaTriangulo()
{
    cout << "\nIngrese la base del triangulo: ";
    cin >> B;
    cout << "\nIngrese la altura del triangulo: ";
    cin >> H;
    res=(B*H)/2;
    cout << "El area de su triangulo es: " << res << endl;

return 0;
}