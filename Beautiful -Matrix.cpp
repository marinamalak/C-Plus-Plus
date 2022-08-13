
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[3][3];
    int c = 0 , x=0;
    for (int i = 0; i < n;i++) {
        for (int j = 0; j < n;j++) {
            cin >> a[i][j];
        }
    }  
    for (int i = 0; i < n;i++) {

        for (int j = 0; j < n;j++) {
            c = 0;
            for (int k = 0;k < n; k++) {
                if (a[i][k] == a[k][j]) {
                    c++;
                }
            }
            if (c == n) {
                x++;
            }
        }     
    }
    cout << x << endl;
}

