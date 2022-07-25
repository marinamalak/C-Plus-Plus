
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	string n;
	cin >> n;
	int f = count(n.begin(), n.end(), '4');
	int s = count(n.begin(), n.end(), '7');
	if (f + s == 7 ||f +s ==4) {
		cout << "YES" <<endl;
	}
	else
	{
		cout << "NO" << endl;
	}

}


