

#include <iostream>
using namespace std;
int main()
{
	int x[3][3];
	int n, sx = 0, sy = 0, sz = 0;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		for (int j = 0; j < 3;j++)

		{
			cin >> x[i][j];
		}
		sx += x[i][0];
		sy += x[i][1];
		sz += x[i][2];

	}

	if (sx == 0 && sy == 0 && sz == 0) {
		cout << "YES" << endl;
	}
	else {
	cout << "NO" << endl;
}
}


