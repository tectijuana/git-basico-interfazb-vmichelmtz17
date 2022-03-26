#include<iostream>
#include<time.h>
#include<stdlib.h>
/**
 * CAPITULO 5:PROBLEMA 2
 * Es un hecho bien conocido que cada vez que
 * se arroja una moneda al aire, hay una probabi-
 * lidad de 50-50 de que caiga "sol". Escribir un
 * programa para imprimir una secuencia 
 * caracteristica de 100 tiros (es decir, sol,
 * aguila, etc).
 */

//@Autor    vmmp17

using namespace std;
int resultado();
int main()
{

	int i, caida;
	srand((unsigned)time(NULL));

	for (i = 0; i < 100; i++)
	{
		caida = resultado();
		if (caida == 1) {
			printf("%d", i);
			printf("- Sol\n");
		}
		else {
			printf("%d", i);
			printf("- Aguila\n");
		}
	}
}
int resultado() {
	return(rand() % 2);
}