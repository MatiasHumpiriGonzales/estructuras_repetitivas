#include <iostream>
using namespace std;
int main (){
	int n;
	cout << "Ingrese la cantidad de multiplos de 9: ";
	cin >> n;
	for (int i = 1; i <= n; i++){
		if (i < n){
		cout << i * 9 << " , ";
	} else {
		cout << i*9;
	}
	}
	return 0;
}
