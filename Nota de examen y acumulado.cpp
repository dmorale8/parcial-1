#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int main()
{
    int n, n2, nota_final;

    cout<<" Ingrese nota acumulada"<< endl;
    cin>>n;

    cout<<"Ingrese nota de examen"<< endl;
    cin>>n2;

    nota_final = n + n2;


    if (nota_final >= 57 && nota_final <=59)
        nota_final = 60;

            cout << " nota final " <<nota_final<<endl;

    return 0;
}

