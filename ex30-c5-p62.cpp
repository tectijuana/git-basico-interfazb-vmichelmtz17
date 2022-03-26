#include <iostream>
#include <string>
/**
 * CAPITULO 5:PROBLEMA 62
 * De cuantas maneras pueden entrar 15 perso
 * nas a un salon de clases?
 */

//@Autor    vmmp17
using namespace std;
long long permutaciones(int n, int r)
{
    long long permutaciones = 1;
    for (int i = 1; i <= r; i++)
        permutaciones *= i;
    return permutaciones;
}
//5- Main
int main()
{
    int personas = 15;

    cout << "El numero de permutaciones de " << personas << " personas es: " << permutaciones(personas, personas) << endl;

    return 0;
}