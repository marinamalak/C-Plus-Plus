
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x, y, z;
    x = a + b;
    y = b + c;
    z = a + c;
    int s = max(y, z);
    cout << max(x , s);
}

