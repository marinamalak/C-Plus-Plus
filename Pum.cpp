
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 1, b = 2, c = 3;
    for (size_t i = 0; i < n;i++)
    {
        cout << a << " " << b << " " << c << " " << "PUM" << endl;
        a += 4;
        b += 4;
        c += 4;
    }
}


