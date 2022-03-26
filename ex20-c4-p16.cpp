#include <iostream>
#include <stdlib.h>
#include <math.h>
/**
 * CAPITULO 4:PROBLEMA 16
 * Imprimir sen2x+cos2 por x = 5, 10, 15,
 * 20, ..., 85 grados. Examinar la salid impresa.
 * Que conclusiones puede sacar usted?
 */

//@Autor    vmmp17

using namespace std;
int main()
{
	double x = 0, resultado, Pi = 3.1416;
	resultado = pow(sin(x * Pi / 180), 2) + pow(cos(x * Pi / 180), 2);
	for (int i = 1; i <= 17; i++) {
		x = x + 5;
		cout << "sen^2(" << x << ") + cos^2(" << x << ") = " << resultado << endl;
	}
	cout << "Todos son resultados son 1."<<endl;
	cout<<"Una propiedad trigonometrica nos dice: "<<endl;
	cout << "sen^2 + cos^2 = 1, El resultado siempre nos dara 1." << endl;
	system("pause");

}