#include <iostream>

using namespace std;
/* ingresar un numero de hasta 4 cifras pero puede ingresar yni mayor.
el programa debera de escribir cuantas cifras tiene el numero*/
int numero;
int main()
{
    cout << "ingresar un numero...:";
    cin>>numero;

     if (numero <0)
         numero*= (-1);

     if (numero<=9)
        cout<<"**tiene una cifra**";
     else if (numero <=99)
        cout<<"**tiene dos cifra**";
     else if (numero <=999)
        cout<<"**tiene tres cifra**";
     else
        cout<<"**tiene cuatro o mas de cuatro cifra**";



}
