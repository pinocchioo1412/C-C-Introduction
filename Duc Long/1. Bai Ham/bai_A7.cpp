#include <iostream>
using namespace std;

bool soChinhPhuong(int a) {
    if (a < 0) return false;
    if (a == 0 || a == 1) return true;
    for (int i = 1; i*i <= a; i++) {
        if (i*i == a) return true;
    }
    return false;
}

int main() {
    int a;
    cin >> a;
    if (soChinhPhuong(a)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}