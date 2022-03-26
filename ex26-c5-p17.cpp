#include <iostream>
#include <stdlib.h>
#include <time.h>
/**
 * CAPITULO 5:PROBLEMA 1
 * Determinar la probabilidad de que un numero
 * entre 2 y 100 sea primo.
 */

//@Autor    vmmp17

using namespace std;
int main()
{

	int  a = 1;
	double division, probabilidad, primos = 0, numerostotales = 99;

	for (int i = 2; i <= 100; i++)
	{
		a = a + 1;
		printf("%d\n", a);
		if (a % 2 == 0) {

		}
		else {

			primos++;
		}

	}
	cout << "Total de numeros: " << numerostotales << endl;
	cout << "Total de numeros primos: " << primos << endl;
	probabilidad = primos / numerostotales;
	cout << "La Probabilidad de que un numero entre 2 y 100 sea primo es = " << probabilidad << endl;
}