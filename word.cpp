
#include <iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int ca = 0, sm = 0;
	for (size_t i = 0; i < s.length(); i++)
	{
		if (isupper(s[i])) {
			ca += 1;
		}
		else {
			sm += 1;
		}
	}
	for (int j = 0; j < s.length(); j++) {
		if (ca > sm) {
			s[j] = toupper(s[j]);
		}
		else
		{
			s[j] = tolower(s[j]);
		}
	}
	cout << s << endl;
}

