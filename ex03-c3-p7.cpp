#include <stdio.h>
#include <vector>
#include <exception>

using namespace std;
/**
 * CAPITULO 3:PROBLEMA 7
 *
 * La distancia entre dos puntos A y B se define como |A - B|.
 * Escribir un programa para comparar |A - B| y |B - A|. Usar
 * las siguientes posiciones para A y B en los datos de prueba
 * 
 *  A | 12 -5 -2  9 
 * -----------------
 *  B | 10  9  3  13
*/

//@Autor    vmmp17

struct tablaexception : public exception
{
	const char * what () const throw ()
    {
    	return "Ups! Las filas no son del mismo tamano.\nEl calculo no se puede realizar.";
    }
};

unsigned short abs_val(short input)
{
    if (input > 0)
        return input;
    else if (input < 0)
        return -input;
    else
        return 0;
}
void display_abs(vector<short> &row1, vector<short> &row2)
{
    bool same_size = row1.size() == row2.size();
    if (same_size)
    {
        printf("|\tA\t|\tB\t|\t|A-B|\t|\t|B-A|\t|\n");
        for (int i=0; i<row1.size();i++)
        {
            i==0 ? printf( 
                "|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\n",
                row1.front(), row2.front(),
                abs_val(row1.front()-row2.front()),
                abs_val(row2.front()-row1.front()) 
                ) : 
            i == row1.size()-1 ? printf( 
                "|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\n",
                row1.back(), row2.back(),
                abs_val(row1.back()-row2.back()),
                abs_val(row2.back()-row1.back())
                ) : printf( 
                "|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\n",
                row1[i], row2[i],
                abs_val(row1[i]-row2[i]),
                abs_val(row2[i]-row1[i])
                );
        }
    }
    else 
        throw tablaexception();
}
int main(){
    vector<short> valores_A = {12, -5, -2, 9};
    vector<short> valores_B = {10, 9, 3, 13};
    printf("\nCAPITULO 3:PROBLEMA 7\n");
    try
    {
        display_abs(valores_A, valores_B);
    }
    catch(tablaexception &e)
    {
        printf(e.what());
        main();
    }
    return 0;
}