

#include <iostream>
#include <iomanip>>
using namespace std;
int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    float x = (a * 2 + b * 3 + c * 5) / 10.0;
    cout <<fixed <<setprecision(1) << "MEDIA =" << " " << x;
}
