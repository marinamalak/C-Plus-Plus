

#include <iostream>
using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	for (size_t i = 0; i < a.length(); i++)
	{
		a[i] =tolower(a[i]);
	
	}
	for (size_t i = 0; i < b.length(); i++)
	{
		b[i] =tolower(b[i]);

	}
	if (a < b) {
		cout << -1 << endl;
	}
	else if(b < a)
	{
		cout << 1 << endl;
	}
	else if (a == b)
	{
		cout << 0 <<endl;
	}
   
}


