#include <iostream>
using namespace std;
int main() {
    int dividendo, divisor;
    int cociente = 0;
    cout << "Ingresa el dividendo: ";
    cin >> dividendo;
    cout << "Ingresa el divisor: ";
    cin >> divisor;
    if (divisor <= 0) {
        cout << "El divisor debe ser mayor que cero." << endl;
        return 1;
    }
    int restante = dividendo;
    while (restante >= divisor) {
        restante -= divisor;
        cociente++;
    }
    cout << "Cociente: " << cociente << endl;
    cout << "Residuo: " << restante << endl;
    return 0;
}

