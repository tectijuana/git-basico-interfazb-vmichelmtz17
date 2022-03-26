#include <iostream>
#include <math.h>
/**
 * CAPITULO 3:PROBLEMA 37
 * Encontrar el area de cualquier cuadrado co
 * la formula A= S2.
 */

//@Autor    vmmp17

using namespace std;
double area()
{
    double lado, area;
    cout <<"\nIngrese la longitud del cadrado: ";
    cin >> lado; 
    area=lado*lado;

    cout <<"Area: " << area ;
    return 0;
}

int main()
{
    cout<<"\n\tArea de un cuadrado";
    area();
    return 0;
}