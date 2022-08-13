
#include <iostream>
using namespace std;
int main()
{
	long n;
	cin >> n;
	int a[4];
	int c = 0;
	for (size_t i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (size_t i = 0; i < n; i++) {
		if (a[i] == 1 || a[i] == 3) {
			c++;
		}
	}
	if (c == 0)
	{
		cout << "Good" << endl;
	}
	else {
		cout << "Bad" <<endl;
	}
}


