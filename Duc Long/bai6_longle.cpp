#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int x = 0;
    cin >> n;
    while (pow(2,x) <= n) {
        x++;
    }

    for (int i = x-1; i >= 0; i--) {
        if (n >= pow(2,i)) {
            cout << "1";
            n -= pow(2,i);
        }
        else {
            cout << "0";
        }

    }
}
