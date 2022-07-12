#include <iostream>
using namespace std;
int main() {
	int n, m ,c = 0;
	cin >> n >> m;
	for (size_t i = 0; i < 100; i++)
	{
		if (n <= m) {
			n = 3 * n;
			m = 2 * m;
			c++;
		}
	}
	cout << c;
}