#include <cmath>
#include<iostream>
using namespace std;

int songuyen(int a) {
    int c;
    if (a >= 1 && a <= 1e10) {
        c = log10(a) + 1;
        return c;
    }
    else if (a == 0) return 1;
    else return -1;
}

int main() {
    int a;
    cin >> a;
    cout << songuyen(a);
    return 0;
}