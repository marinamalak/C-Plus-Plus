// Soldier and Bananas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int k, n, w , f;
	int s = 0;
    cin >> k >> n >> w;
	for (size_t i = 1; i <= w; i++)
	{
		s = s + k * i;
	}
	if (n >= s) {
		f = 0;
	}
	else {
	 f = abs(s - n);
	}
	cout << f;
}

