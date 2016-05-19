#include <iostream>

using namespace std;

void ingresar(int &n1, int &n2)


{
    cout << "Ingresar n1...:";
    cin>>n1;
    cout << "Ingresar n2...:";
    cin>>n2;

}
void presentar (int n1, int n2)
{
    cout <<"valor de n1.."<<n1<<"\n";
    cout <<"valor de n2.."<<n1<<"\n";

}
void calcular (int n1, int n2, int&suma)
{
    suma=n1 +n2;
}
int mayor(int n1, int n2)
{
    if(n1>n2)
    return n1;
    else
    return n2;
}

int main()
{int n1,n2,suma,maxNumero;
ingresar(n1,n2);
presentar(n1,n2);
calcular(n1,n2,suma);
cout<<"suma final es.."<<suma<<"\n";
maxNumero = mayor(n1,n2);
cout<<"mayor de los dos numeros es.."<<maxNumero<<"\n";
}
