#include <iostream>
using namespace std;
int main (){
	int n, suma;
	cout << "Indique los 'n' digitos a sumar: ";
	cin >> n;
	suma = 0;
	for (int i = 1; i <= n; i = i + 2 ){
		suma = suma + i;
}
	cout << suma;
return 0;
}
