#include <iostream>

using namespace std;
char resp;
int turno, horas, i, sumahoras, total, pxh, mayor;

int main()
{ mayor=0;
    do{
    do
{cout<<"Ingresar turno 1,2,3..:";
    cin>>turno;}
while ((turno!=1) && (turno!=2) && (turno!=3));
sumahoras=0;
 for(i=1;i<=5;i++)
 {
    cout<<"Horas del dia..:"<<i<<" ";
    cin>>horas;
    sumahoras+=horas;
 }
 switch(turno)
{
case 1:
    pxh=100;
    break;

    case 2:
    pxh=150;
    break;

    default:
    pxh=100;
    break;
}
total= sumahoras * pxh;
cout<<"Pago total de horas es..:"<<total<<"\n";
if(mayor<total)
    mayor=total;
do
{
    cout<<"Desea Continuar...:";
    cin>>resp;
}
while ((resp!= 'S') && (resp!='N'));
} while (resp!='N') ;
cout<<"pago mayor es...:"<<mayor<<"\n";}
