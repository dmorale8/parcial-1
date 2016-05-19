#include <iostream>

using namespace std;

int main()
{
    int n, n2, n3;

		cout << "Ejercicio 12" << endl;
		cout << "Introduzca 3 numeros: " << endl;
		cout << "1. ";
		cin >> n;
		cout << endl << "2. ";
		cin >> n2;
		cout << endl << "3. ";
		cin >> n3;

		if (n < n2 && n2 < n3)
			cout << n3 << n2 << n << endl;
		else if (n2 < n && n < n3)
			cout << n3 << n << n2 << endl;
		else if (n3 < n && n < n2)
			cout << n2 << n << n3 << endl;
		else if (n < n3 && n3 < n2)
			cout << n2 << n3 << n << endl;
		else if (n2 < n3 && n3 < n)
			cout << n << n3 << n2<< endl;
		else if (n3 < n2 && n2 < n)
			cout << n << n2 << n3 << endl;
}
