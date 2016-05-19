#include <iostream>

using namespace std;

int main()
{
    int n, n2, n3;

		cout << "Ejercicio 11" << endl;
		cout << "Introduzca 2 numeros: " << endl;
		cout << "1. ";
		cin >> n;
		cout << endl << "2. ";
		cin >> n2;

		if (n > n2){
			n3 = n;
			n = n2;
			n2 = n3;

			cout << "Se invirtieron los numeros" << endl;
			cout << "Primer numero: " << n << endl << "Segundo numero: " << n2 << endl;
		}
		else
		cout << "Segundo numero es mayor" << endl;
}
