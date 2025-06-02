#include <iostream>
using namespace std;
int main(){
	int a, b, m;
	m = 0;
	cout << "Ingrese el multiplicando: ";
	cin >> a;
	cout << "Ingrese el multiplicador: ";
	cin >> b;
	for (int i = 0; i < b; i++){
		m = m + a;
	}
	cout << "La multiplicacion es : " << m;
	return 0;
}
