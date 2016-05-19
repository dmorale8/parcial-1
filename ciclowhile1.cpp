#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int contador;
int numero;
int suma;
int mayor;
int menor;
int con50;
int suma50;
int prome50;

int main()
{
srand (time(0));
contador=0;
suma=0;
mayor=0;
menor=100;
suma50=0;
con50=0;
while(contador<10)
{

    numero =1 + rand() % (100-1);
    contador++;
    suma= suma + numero;
    if(mayor < numero)
    {
        mayor=numero;
    }
    if(menor > numero)
    {
        menor=numero;
    }
    if(numero>50)
      {
          con50++;
          suma50+= numero;
      }
    cout<<contador<<"numero"<<numero<<"\n";
}
prome50=suma50/con50;
    cout<<"promedio mayores a 50"<<prome50<<"\n";
    cout<<"suma total es"<<suma<<"\n";
    cout<<"numero mayor es"<<mayor<<"\n";
    cout<<"numero menor es"<<menor<<"\n";
    cout<<"numero mayores a 50"<<con50<<"\n";
    cout<<"final del programa"<<"\n";



}




