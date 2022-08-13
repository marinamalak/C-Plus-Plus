

#include <iostream>
using namespace std;

int main()
{
	long n;
	string s;
	cin >> n >> s;
	int m = 0, a = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (s[i] == 'A')
			a++;
		if (s[i] == 'M')
			m++;
	}
	if (m > a) {
		cout << "Mostafa" << endl;
	}
	else if (a > m){
		cout << "Ahmed" << endl;
	}
	else {
		cout << "Friendship" << endl;
	}


}

