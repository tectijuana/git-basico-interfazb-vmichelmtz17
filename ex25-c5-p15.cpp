#include <iostream>
/**
 * CAPITULO 5:PROBLEMA 15
 * El conjunto de numeros que aparece con fre-
 * cuencia e importancia en probabilidad y analiss
 * es N factorial (N!):
 * Generar una tabla de factoriales hasta cierto valor
 * espicificado de N.
 */

//@Autor    vmmp17

using namespace std;
class Factorial
{
public:
    void Operacion()
    {
        int n, i;
        long double factorial; 
        cout << "Escriba un numero: ";
        cin >> n;
        factorial = 1;
        for (i = 1; i <= n; i++)
            factorial = factorial * i;
        cout << endl << "Factorial de " << n << " -> " << factorial << endl;
        system("pause");
    }
};
int main()
{
    Factorial obj;
    obj.Operacion();
    return 0;
}