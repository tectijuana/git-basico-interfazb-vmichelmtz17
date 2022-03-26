#include <iostream>
#include <math.h>
/**
 * CAPITULO 3:PROBLEMA 35
 * La formula de Heron puede usarse para en-
 * conrar el area de cualquier triangulo, dadas 
 * las medidas de los tres lados. La formula es:
 * Area = RAIZ s(s-a)(s-b)(s-c)
 * donde es = 1/2(a+b+c). Encontrar el area
 * de un triangulo cuyos lados sea 6, 8 y 10m.
 */

//@Autor    vmmp17

using namespace std;
int main(){
    float A=6, B=8, C=10, area, s;
    s = (A + B + C) / 2;
        area = sqrt(s * (s - A) * (s - B) * (s - C));
        cout << "Area: " << area << endl;
        cout << endl;
        return 0;
}