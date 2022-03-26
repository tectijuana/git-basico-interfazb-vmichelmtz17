#include <iostream>
#include <cmath>
using namespace std;
/**
 * CAPITULO 3:PROBLEMA 14 
 * Introducir tres numeros positivos X, Y, Z. De-
 * terminar si pueden ser las longitudes de los lados de un triangulo recto.
*/

//@Autor    vmmp17
int main()
{
    double X, Y, Z, Big;
    int S;
    cout << "Introduce 3 numeros que sean positivos" << endl;
    cout << "X: ";
    cin >> X;
    cout << "Y: ";
    cin >> Y;
    cout << "Z: ";
    cin >> Z;
    if (X > Y && X > Z) {
        Big = X;
        S = 0;
    }
    else if (Y > X && Y > Z) {
        Big = Y;
        S = 1;
    }
    else {
        Big = Z;
        S = 2;
    }

    if (X > 0 && Y > 0 && Z > 0) {
        switch (S)
        {
        case 0:
            if (Big == sqrt(pow(Y, 2) + pow(Z, 2)))
                cout << "Es Triangulo recto" << endl;
            else
                cout << "No es triangulo recto" << endl;
            break;
        case 1:
            if (Big == sqrt(pow(X, 2) + pow(Z, 2)))
                cout << "Es triangulo recto" << endl;
            else
                cout << "No es triangulo recto" << endl;
            break;
        case 2:
            if (Big == sqrt(pow(X, 2) + pow(Y, 2)))
                cout << "Es triangulo recto" << endl;
            else
                cout << "No es triangulo recto" << endl;
            break;
        default:
            break;
        }
    }
    else
        cout << "No es triangulo recto" << endl;
}