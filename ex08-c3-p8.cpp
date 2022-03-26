#include <iostream>
#include <math.h>
#include <cmath>
/**
 * CAPITULO 3:PROBLEMA 8
 * Encontrar el area de cualquier rectangulo con
 * la formula Area = lw, donde l es la longitud 
 * y w es el ancho
*/

//@Autor    vmmp17

using namespace std;

int main()
{
    double l, w, area;

    cout << "Ingrese la base del rectangulo: ";
    cin >> l;
    cout << "Ingrese la altura del rectangulo: ";
    cin >> w;
    area= l * w;
    cout << "El area del rectangulo es: " << area << endl;
    return 0;
}