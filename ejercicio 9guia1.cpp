#include <iostream>

using namespace std;

int main()
{
    	int n, n2, n3;


	cout << "Introduzca 3 numeros: " << endl;
	cout << "1. ";
	cin >> n;
	cout << endl << "2. ";
	cin >> n2;
	cout << endl << "3. ";
	cin >> n3;

	if (n < n2 && n2 << n3){
		cout << "Sus numeros estan en orden ascendente" << endl;
	}
	else
		cout << "Gracias, pero no estan en orden ascendente" << endl;
		return 0;
}
