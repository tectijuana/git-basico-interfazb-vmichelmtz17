#include <iostream>
#include <math.h>
/**
 * CAPITULO 5:PROBLEMA 22
 * Sacar dos numeros al azar entre 1 y 20.
 * Cual es la probabilidad de que su suma sea 12?
 */

//@Autor    vmmp17

using namespace std;
int getRandomNumber()
{
	return (rand() % 20);
}
int main()
{

	srand(time(NULL));
	int n1, n2, sum;
	double prob;

	n1 = getRandomNumber();
	n2 = getRandomNumber();

	cout << "Valor 1: " << n1 << endl;
	cout << "Valor 2: " << n2 << endl;
	
	sum = n1 + n2;

	
	cout << "Sum: " << sum << endl;
	prob = ((double)sum / 12) * 100;
	cout << "Prob: " << prob << "%" << endl;

	return 0;
}