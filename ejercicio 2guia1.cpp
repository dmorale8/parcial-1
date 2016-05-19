#include <iostream>

using namespace std;

int main()
{ int numero;

    cout << "Ingresar numero";
    cin>> numero;
    if (numero <0) numero*=(-1);

    if (numero <=9 and numero >0)
        cout<<"tiene una cifra";
    else if (numero <=99 and numero >9)
        cout<<"tiene dos cifras";
    else if (numero <=999 and numero >99)
        cout<<"tiene tres cifras";
    else
        cout<<"tiene cuatro cifras";

    return 0;
}
