#include <iostream>
using namespace std;
int main()
{
    int x[5][5];
    int n = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> x[i][j];
        }
    }  cout << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (x[i][j] == 1)
            {
                n = abs(i - 2) + abs(j - 2);
            }

        }
    }cout << n << endl;
}