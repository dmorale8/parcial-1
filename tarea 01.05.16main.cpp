#include <stdio.h>
#include <conio.h>


using namespace std;

int main()
{
    float n;
    printf("ingrese el numero  evaluar");
    scanf("%f",&n);
    if(n==0)
    {
        printf("\nTu numero es cero");
    }
    else
    {if(n>0)
    {
        printf("\nTu numero es positivo");
    }
    else
    {
       printf("\nTu numero es negativo");
    }
    }
}
