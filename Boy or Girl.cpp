// Boy or Girl.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
   sort(s.begin(), s.end());
   cout << s[7] <<endl;
    int c = 0;

  for (size_t i = 1; i <= s.length(); i++)
    {
        if (s[i] != s[i-1])
        {
            c++;
        }
    }
    cout << endl;
    if (c % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
}

