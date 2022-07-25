

#include <iostream>
using namespace std;

int main()
{
	int n ,p=1;
	cin >> n;
	for (size_t i = 1; i <= 10; i++)
	{
		p = i * n;
		cout << i << " " << "x" << " " << n << " " << "=" << " " << p << endl;
	}
}


