#include<iostream>
using namespace std;

int maxDigit(int a) {
    int maxD = 0;
    if (a >= 1 && a <= 1e10) {
        while (a > 0) {
            int so = a % 10;
            if (so > maxD) {
                maxD = so;
            }
            a /= 10;
        }
    }
    return maxD;
}

int main() {
    int a;
    cin >> a;
    cout << maxDigit(a);
    return 0;
}