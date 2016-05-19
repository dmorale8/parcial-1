#include <iostream>
#include <stdlib.h>

using namespace std;
int num,cp=0,mayor=0,suma=0,menor=9999999998;
char resp;
float promedio=0;

int main()
{ do
{
    {
        do{cout << "ingrese numero...";
    cin>>num;}

    while (num %2 !=0);

    suma+=num;
    cp++;
    if (num>mayor)
        mayor=num;
    if (num<menor)
        menor=num;
    promedio=suma/cp;
}
do
    {cout<<"desea continuar:";
cin>>resp;
resp=toupper(resp);
}
 while ((resp!='S') and (resp!='N'));
}while (resp!='N');
cout<<"suma de numero pares..."<<suma<<endl;
cout<<"total de numero pares contados"<<cp<<endl;
cout<<"numero mayor contado"<<mayor<<endl;
cout<<"numero menor contado"<<menor<<endl;
cout<<"promedio"<<promedio<<endl;

return 0;
}


