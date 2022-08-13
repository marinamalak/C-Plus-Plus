

#include <iostream>
using namespace std;

int main()
{
	char c;
	cin >> c;
	if (isupper(c)) {
	
		cout << "ALPHA"<<"\n" << "IS CAPITAL" << endl;
	}
	else if (islower(c)) {
	
     cout << "ALPHA"<<"\n" << "IS SMALL" << endl;
	}
	else {
		cout << "IS DIGIT" << endl;
	} 
}


