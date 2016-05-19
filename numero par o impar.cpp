#include <stdio.h>

using namespace std;

int main()
{
    int n;
    printf("ingrese el numero");
    scanf("%d", &n);
    if(n%2==0)
{
    printf("%d es par", n);
}
else
{
    printf("%d es impar", n);
}
}
