#include <iostream>
#include <math.h>
/**
 * CAPITULO 3:PROBLEMA 52
 * Si un paralelogramo tiene una base de 30 cm
 * y una altura vertical de 15cm Cual es su area?
 */

//@Autor    vmmp17

 int area()
 {
     int base=30, altura= 15, resultado;
     resultado = base*altura;
     return resultado;
 }

int main()
{
    cout<<"\n\tEl area de un paralelogramo\n";
    cout<<"Datos:\nBase: 30 cm\nAltura: 15 cm";
    cout<<"\nArea: "<<area()<<" cm.";

    return 0;
}