#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iostream>



using namespace std;

int main()
{
    #include <stdlib.h>
#include <time.h>
		srand(time(NULL));

		int n = rand() % 200 + 1;

		cout << n << endl;

		if (n == 60)
			cout << "Su rango es " << n << endl;
		else if (n > 60 && n <= 90)
			cout << "Su rango esta entre 60-90" << endl;
		else if (n > 90 && n <= 160)
			cout << "Su rango esta entre 61-160" << endl;
		else if (n > 160 && n <= 200)
			cout << "Su rango esta entre 161-200" << endl;
}
