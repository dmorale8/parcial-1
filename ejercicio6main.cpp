#include <iostream>
#include <stdio.h>

using namespace std;


int main()
{
    int maxi=0;
    char resp;
    do{

    int turno, horas=0, suma=0, pagoxh=0,pago=0;

    do{

    cout<<"Ingrese Turno...:";
    cin>>turno;
    _flushall();

    }while (!(turno>=1 and turno<=3));

    for (int i=1;i<6;i++)
    {
        cout<<"Ingresar Horas dia "<<i<<": ";
        cin>>horas;
        suma=suma+horas;
    }
    switch (turno)
    {
    case 1:
        pagoxh=100;
        break;
    case 2:
        pagoxh=150;
        break;
    default:
        pagoxh=200;
        break;
    }
    cout<<"Total de Horas "<<suma<<endl;
    pago=suma*pagoxh;
    cout<<"Pago de horas "<<pago<<endl;
    do
    {
        _flushall();
        cout<<"Desea Continuar .....:";
        cin.get(resp);
        _flushall();
    } while ((toupper(resp) !='S') and (toupper(resp) !='N'));

    if (pago>maxi)
    {maxi=pago;}

    } while ((toupper(resp)=='S'));
    cout<<"Sueldo mayor "<<maxi<<endl;
}

