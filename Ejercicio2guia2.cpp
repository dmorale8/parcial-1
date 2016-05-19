#include <iostream>

using namespace std;

int contar=0;
int main()
{
    for(int n=2;n<=100; n++)
    {
        int c=0;
        for(int x=1;x<=100; x++)
        {
            if(n%x==0)
                c++;
        }
        if(c==2)
        {
            contar++;
            cout<<n<<endl;
        }
    }
    cout<<"numero total de primos; "<<contar;
}
