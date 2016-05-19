#include <iostream>

using namespace std;
int main ()
{

/*...*/
int t_cliente, cant, precio;

	cout << "Ejercicio 6" << endl;
	cout << "Introduzca tipo de cliente: ";
	cin >> t_cliente;
	cout << "Introduzca cantidad de producto: ";
	cin >> cant;
	cout << "Introduzca precio de producto: ";
	cin >> precio;

	int subtotal = precio*cant;
	int total;

	cout << "Subtotal: " << subtotal << endl;
	switch (t_cliente)
	{


	case 1:
		total = subtotal - subtotal*0.07; break;
	case 2:
		total = subtotal - subtotal*0.08; break;
	case 3:
		total = subtotal - subtotal*0.1; break;
	}

	cout << "Total despues de descuento: " << total<< endl;



}
