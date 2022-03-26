#include <iostream>
/**
 * CAPITULO 3:PROBLEMA 13
 * 
 * Un teorema de Geometria fundamental se re-
 * fiere a las medidas de los tres lados de un
 * triangulo. El teorema establece que la suma
 * de las medidas de los lados de un triangulo
 * debe ser tal que la suma de las medidas de
 * dos cualesquiera de los lados sea mayor que
 * la medida del tercero. Hacer un programa que
 * determine si tres numeros cualesquiera pue-
 * den ser las medidas de los lados de un trian-
 * gulo.
*/

//@Autor    vmmp17

using namespace std;
int main()
    double a, b, c;
    cout << "Escribe lado A: ";
    cin >> a;
    cout << "Escribe lado B: ";
    cin >> b;
    cout << "Escribe lado C: ";
    cin >> c;
    if ((a + b) > c && (b + c) > a && (c + a) > b)
        cout << "Si pueden ser lados de un triangulo" << endl;
    else
        cout << "No pueden ser un triangulo" << endl;
}