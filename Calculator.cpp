
#include <iostream>
using namespace std;
int main()
{
	long long a, b;
	char s;
	cin >> a >> s >> b;
	switch (s) {
	case '+':
		cout << a + b << endl;
		break;
	case '-':
		cout << a - b << endl;
		break;
	case '*':
		cout << a * b << endl;
		break;
	case '/':
		cout << a / b << endl;
		break;
	}
}


