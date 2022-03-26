#include <iostream>
#include <exception>

/**
 * CAPITULO 3:PROBLEMA 2
 * 
 * Dada una medida angular mayor que 0 grados pero menor
 * que 180 grados, clasificar el ángulo como obtuso, recto
 * o agudo.
*/

//@Autor    vmmp17

using namespace std;
struct anglesException : public exception
{
	const char * what () const throw ()
    {
    	return "El angulo supera el dominio de (0^grados, 180^grados)!";
    }
};

void clasificacion_angulo(double &angulo){
    if(angulo>0 && angulo<180)
    {
        if(angulo==90)
            cout << "\nEl angulo es recto!\n";
        else if (angulo>90)
            cout << "\nEl angulo es obtuso!\n";
        else
            cout << "\nEl angulo es agudo!\n";  
    }
    else
        throw anglesException();
}

int main()
{
    double angulo;
    try
    {
        cout << "\nCAPITULO3:PROBLEMA2\n";
        cout << "\nIngrese del valor del angulo: ";
        cin >> angulo;
        clasificacion_angulo(angulo);
    }
    catch(anglesException &e)
    {
        cout << e.what() << endl;
        main();
    } 

    return 0;
}