#include <iostream>

using namespace std;

int main()
{
    int n;

	cout << "Introduzca un numero de 3 digitos: " << endl;
	cin >> n;

	cout << n % 10 << n%100/10 << n/100<< endl;
}
