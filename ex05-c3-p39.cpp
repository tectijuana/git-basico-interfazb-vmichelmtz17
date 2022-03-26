#include <iostream>

#include <cstdlib>
/**
 * CAPITULO 3:PROBLEMA 39
 * Dada la longitud del lado de un cuadrado, cal-
 * cular el area.
*/

//@Autor    vmmp17


using namespace std;

int lado;

int perimetro;

int main(){

    cout << "Ingrese la longitud de un lado del cuadrado" << endl;

    cin >> lado;

    perimetro=lado*4;

    cout << "El perimetro de su cuadrado es: " << perimetro << endl;

system("pause");

return 0;

}