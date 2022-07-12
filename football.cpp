
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c = 0;
    for (size_t i = 1; i < s.length()+1; i++)
    {
            if (s[i] == s[i - 1]) {             
                c++;
            }
        else {
                if (c >= 6) {
                    continue;
                }else
               c = 0;
          }   
    }
    if (c >= 6) {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}


