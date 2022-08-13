
#include <iostream>
using namespace std;
int main()
{
	long long a, b, c, min, max;
	cin >> a >> b >> c;
	max = a;
	min = a;
	if (b > c) {
		if (a < b) {
			max = b;
		}
		if (c < a) {
			min = c;
		}
	}
	else {
		if (a < c) {
			max = c;
		}
		if (b < a) {
			min = b;
		}
	}
	cout <<min <<" " << max << endl;
}


