#include <iostream>
using namespace std;
/**
 * CAPITULO 5:PROBLEMA 28
 * Simular el lanzamiento de tres dados
 */

//@Autor    vmmp17
class Carta
{
public:
	void Operacion()

	{
		cout << "Eliminar ases, dieces o cartas de cara, quedan 32 cartas:" << endl;
		cout << endl;

		int w;
		int x;
		int y;
		int z;

		w = 100;
		x = 32;

		y = 100 / 32;
		z = y * 2;

		cout << "La probablidad de obtener una pareja es de " << z << "% aproximadamente" << endl;
	}
};
//5-Main
int main()
{
	
	Carta obj;
	obj.Operacion();
	return 0;
}