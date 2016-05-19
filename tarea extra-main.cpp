#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main()
{
	char continuar;
	int mayorPar = 0;
	int menorPar = 	2147483647;
	int contPares = 0;
	int sumaPares = 0;
	do
	{
		int num;
		cout<<"Ingrese un numero: "<<endl;
		do {
			cin>> num;

			if(num % 2 != 0){
				cout<<"ERROR: el numero debe ser par."<<endl;
			}

			if(num % 2 == 0){
				if (num > mayorPar)
					mayorPar = num;

				if(num < menorPar)
					menorPar = num;

				sumaPares = sumaPares + num;
				contPares = contPares + 1;
			}

		}while(num % 2 != 0);

		cout<<"Desea continuar(S o N): ";
		do{
			cin>>continuar;
		}while(!((continuar=='S')or(continuar=='N')));


	}while(continuar != 'N');

	cout<<"Promedio Pares: "<<(sumaPares / contPares)<<endl;
	cout<<"Mayor par: "<<mayorPar<<endl;
	cout<<"Menor par: "<<menorPar<<endl;
    return 0;
}
