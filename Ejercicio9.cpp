#include <iostream>
using namespace std;
int main() {
    int n;
    int digitosPares = 0;
    cout << "Ingresa un numero entero: ";
    cin >> n;
    if (n < 0) {
        n = -n;
    }
    if (n == 0) {
        digitosPares = 1; 
    } else {
        while (n > 0) {
            int digito = n % 10; 
            if (digito % 2 == 0) {
                digitosPares++;
            }
            n = n / 10; 
        }
    }
    cout << "El numero tiene " << digitosPares << " dígito(s) par(es)." << endl;
    return 0;
}


