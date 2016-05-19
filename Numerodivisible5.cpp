#include <iostream>

using namespace std;
int numero;
int main()
{
    cout << "Ingresar numero";
    cin>>numero;

    if (numero % 5==0)
    {
        cout<<"numer0 divisible entre 5";
    }
    else
    {
        cout<< "No es divisible entre 5";
    }
}
