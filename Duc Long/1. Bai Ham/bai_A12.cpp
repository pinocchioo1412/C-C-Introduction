#include <iostream>

using namespace std;

int ucln(int a, int b) {
    while (b != 0) {
        int x = b;
        b = a % b;
        a = x;
    }
    return a;
}

int ucln3So(int a, int b, int c) {
    return ucln(ucln(a, b), c);
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << ucln3So(a, b, c);
    return 0;
}