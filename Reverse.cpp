
#include <iostream>
    using namespace std;

    int main() {

        int n, remainder;
        cin >> n;

        while (n != 0) {
            remainder = n % 10;
            cout << remainder <<endl;
          
            n /= 10;
        }

     
}

