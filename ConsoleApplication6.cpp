#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int c = 0, s = 0;
    int x[3][3];
    for (int i = 0; i < 3;i++) {
        for (int j = 0; j < 3; j++) {
            cin >> x[i][j];
        }cout << endl;
    }
    for (int i = 0; i < 3;i++) {
        c = 0;
        for (int j = 0; j < 3; j++) {

            if (x[i][j] == 1) {
                c += 1;
            }
        } if (c > 1)
            s += 1;
    }
  cout << s;
}

