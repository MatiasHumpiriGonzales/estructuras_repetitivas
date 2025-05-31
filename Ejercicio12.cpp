#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese el numero a indicar su tabla de multiplicar: ";
    cin >> n;
    for (int i = 0; i <= 10; i++){
    	cout << n << " x " << i << " = " << i * n << endl;
	}
	return 0;
}
