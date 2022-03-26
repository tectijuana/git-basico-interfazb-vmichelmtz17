#include <iostream>
#include <cstdlib>
#include <ctime>
/**
 * CAPITULO 5:PROBLEMA 6
 * Simular 1000 tiradas de un dado.
 */

//@Autor    vmmp17

using namespace std;
void mostrar(int b[], int tamano)
{
	for (int i = 0; i < tamano; i++)
	{
		cout << b[i] << endl;
	}
}
int main()
{
	const int tamano = 1000;
	int a[tamano];
	int s4 = 0;
	srand(time(0));
	for (int s = 0; s < tamano; s++)
	{
		a[s] = 1 + rand() % 6;

		if (a[s] == 4)
		{
			s4 += 1;
		}
	}
	cout << endl;
	cout << "El 4 se repite: " << s4 << " veces." << endl;
	return 0;
}