

#include <iostream>
using namespace std;

int main()
{
	int n , k , b =0 ;
	cin >> n >> k;
	int x[8];
	for (size_t i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	int v = x[k - 1];
	for (int j = 0; j < n;j++) {
		if (x[j] >= v && x[j] !=0 ) {
			b += 1;
		}
	
	}
	cout << b << endl;
}
