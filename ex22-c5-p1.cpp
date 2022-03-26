#include<iostream>
#include<time.h>
#include<stdlib.h>
/**
 * CAPITULO 5:PROBLEMA 1
 * Simular la caida de una moneda
 */

//@Autor    vmmp17

using namespace std;
class Moneda
{
public:
    void Operacion()

    {
        int opt = 0, coin = 0;
        do {
            cout << "Lanzar la moneda?: ";
            cout << "\n1. SI" << endl;
            cout << "2. NO" << endl;
            cout << "Opcion: ";
            cin >> opt;
            switch (opt) {
            case 1:
                srand(time(NULL));
                coin = rand() % 2;
                if (coin == 0) {
                    cout << "Cara";
                }
                else {
                    cout << "Cruz";
                }
                break;
            case 2:
                cout << "Gracias";
                break;

                cout << "Escriba una opción válida";
                break;
            }
        } while (opt != 2);
        cin.get();
    }
};
//5-Main
int main() {
    Moneda obj;
    obj.Operacion();
    return 0;
}