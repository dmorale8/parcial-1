#include <iostream>

using namespace std;

int main()
{   int dia;
    cout << "Ingresar del dia 1-7....:";
    cin>>dia;

    switch (dia)
    {
    case 1:
        cout<<"Domingo";
        break;
    case 2:
        cout<<"lunes";
        break;
    case 3:
        cout<<"martes";
        break;
    case 4:
        cout<<"miercoles";
        break;
    case 5:
        cout<<"jueves";
        break;
    case 6:
        cout<<"viernes";
        break;
    case 7:
        cout<<"sabado";
        break;
    default:
        cout<<"dia incorrecto";
        break;


    }
}
