
#include <iostream>
using namespace std;
int main()
{
	int n , c =0 , v = 0 ;
	cin >> n;
	for (size_t i = 0; i < 1000000; i++)
	{
		if (n > 5 && v < n) {
			v += 5;
			c++;
		}
		else if (n <= 5) {
			c = 1;
		}
	
	}
	cout << c << endl ;
}

