#include<iostream>
using namespace std;
int main()
{
	int n ,m ,k;
	cout << "please enter the number of lines " << endl;
	cin >> n;
	int sum =0;
	for (int i= 1; i<= n; i++) {
		
		cout << "please enter the number of numbers of line "<< i << endl;
		cin >> m;
		for (int j = 1;j <= m;j++) {
			cout << "please enter the  numbers  " << j <<"  ";
			cin >> k;
			sum += k;
		
		}
		cout << "sum : " << sum << endl;
	}

}