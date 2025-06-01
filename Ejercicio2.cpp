#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Introduce números positivos: " << endl;
    while (true) {
        cin >> numero;
        if (numero < 0) {
            break; 
        }
    }
    cout << "Fin de la captura" << endl;
    return 0;
}

