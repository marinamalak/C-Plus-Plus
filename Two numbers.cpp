
#include <iostream>
using namespace std;
int main()
{
	
	float  c, m;
	int a , b , x , y , z;
	cin >> a >> b;
	c = a / b;
	x = c;
	m = (float)(a % b) / b ;
	cout << "floor " << a << " / " << b << " = " << x << endl;
	if (m > 0) {
		z = c + 1;
		cout << "ceil " << a << " / " << b << " = " << z << endl;
	}
	else if(m == 0) {
		z = c ;
		cout << "ceil " << a << " / " << b << " = " << z << endl;
	}

	if (m >= .5) {
		y = c + 1;
		cout << "round " << a << " / " << b << " = " << y << endl;
	}
	else {
		y = c;
		cout << "round " << a << " / " << b << " = " << y << endl;
	}
	

}


