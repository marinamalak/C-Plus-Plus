// Theatre Square.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n, m, a;
	cin >> n >> m >> a;
	int x = n / a;
	int y = m / a;
	if (n % a != 0)
		x += 1;
	if (m % a != 0)
		y += 1;
	cout << x * y << endl;
}


