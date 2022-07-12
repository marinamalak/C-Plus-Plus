

#include <iostream>
using namespace std;
int main()
{
	string a;
	cin >> a;
	for (size_t i = 0; i < a.length(); i++)
	{
		
			a[i] = tolower(a[i]);
			if (a[i] == 'o' || a[i] == 'u' || a[i] == 'a' || a[i] == 'l' || a[i] == 'e' || a[i] == 'y' ) {
				continue;
		}
		cout << "." << a[i] ;
	}
}


