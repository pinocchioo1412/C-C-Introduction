#include <iostream>
using namespace std;

int main() {
    int n, a, b = 0;
    cin >> n;
    if (n < 0) {
        cout << "Error";
    }
    else {
        while (n > 0) {
            a = n % 10;
            n /= 10;
            b = b*10 + a;

        }
    cout << b;
    }
}
