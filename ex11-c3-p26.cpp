#include <iostream>
#include <math.h>
#include <cmath>
/**
 * CAPITULO 3:PROBLEMA 26
 * Snoopy, un gigante de otro planeta ha decidi-
 * do invadir la Tierra y regresar luego a su pro-
 * pio planeta. Durante su visita, prefiere ocultar
 * su identidad portando una mascara que le
 * cubra la nariz y la boca. La mascara debe te-
 * ner una altura (h) de 6.4m y una base (b) de
 * 14.3m. Con la ecuacion AREA = 1/2 bh, escri-
 * bir un programa para determinar los metros
 * cuadrados que necesitara el gigante. 
 */

//@Autor    vmmp17

using namespace std;

int main()
{
   double b,h,a;
    b = 14.3;
    h = 6.4;
    a = (b * h) / 2;
    cout << "La mascara tiene que ser de " << a << " m2" << endl;
    return 0;
}