
#include <iostream>
using namespace std;
int main()
{
	long n , s = 0;
	cin >> n;
	long long x[100000];
	for (size_t i = 1; i <= n; i++)
	{
		cin >> x[i];
		
	}
	for (size_t i = 0; i < n-1; i++) {
		if (x[i] != x[i+1]) {
			s++;
		}
	}
	cout << s;
}


