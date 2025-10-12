#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 0) {
        cout << "Error";
    }
    else {
        while (n > 0) {
            cout << n % 10;
            n /= 10;
        }

    }
}
