
/**
#include <iostream>
#include <math.h>
using namespace std;

int main()
{

     long long n , s = 0 ;
	cin >> n;
	for (size_t i = 1 ; i <= n ; i++)
	{
		s += pow(-1, i)* i;
	}
	cout << s;
} */
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    long long n, a;
    cin >> n;
    if (n % 2 == 0) a = n / 2;
    else a = ((n + 1) / 2) * (-1);
    cout << a << endl;
    return 0;
}


