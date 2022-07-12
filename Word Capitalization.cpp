// Word Capitalization.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	for (size_t i = 0; i < s.length(); i++)
	{
		s[0] = toupper(s[0]);
		cout << s[i];
	}

}
