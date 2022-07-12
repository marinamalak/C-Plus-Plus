// test 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int x = 0;
	int n;
	cin >> n;
	while (n) {
		string g;
		cin >> g;
		if (g[1] == '+') {
			x++;
		}
		else {
			x--;
		}n--;
	}
	cout << x << endl;
}


