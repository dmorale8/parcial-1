#include <iostream>
#include <stdlib.h>

using namespace std;
int num,cp=0,mayor=0,suma=0,menor=9999999998;
char resp;
float promedio=0;

int main()
{
   do
    {
        { do
           {
               cout << "Ingrese Numero : ";
               cin>>num;
           }
            while (num%2!=0);
            suma+=num;
            cp++;

            if (num>mayor)
               mayor=num;
            if (num<menor)
               menor=num;

            promedio=suma/cp;
          }
            do{
                cout<<"Desea Continuar : ";
                cin>>resp;
                resp=toupper(resp);
              }
               while  ((resp!='S') and (resp!='N'));
    } while (resp!='N');

      cout<<"Suma de Numeros pares ....>"<<suma<<endl;
      cout<<"numeros pares contados :"<<cp<<endl;
      cout<<"numero Mayor  contados :"<<mayor<<endl;
      cout<<"numero Menor contados :"<<menor<<endl;
      cout<<"Promedio :"<<promedio<<endl;
return 0;}
