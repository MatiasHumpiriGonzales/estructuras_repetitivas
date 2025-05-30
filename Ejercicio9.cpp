#include <iostream>
using namespace std;
int main() {
    int n;
    int digitos = 0;
    cout << "Ingresa un numero entero: ";
    cin >> n;
    if (n == 0) {
        digitos = 1;
    } else {
        if (n < 0) {
            n = -n;
        }
        while (n > 0) {
            n = n / 10;
            digitos++;
        }
    }
    cout << "El numero tiene " << digitos << " digitos." << endl;
    return 0;
}

