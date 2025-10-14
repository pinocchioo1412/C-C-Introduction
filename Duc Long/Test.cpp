#include<iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    while (b != 0) {
        int gcd = a % b;
        a = b;
        b = gcd;
    }
    cout << a << endl;

}
