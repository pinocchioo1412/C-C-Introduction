#include <iostream>
using namespace std;

long long tinhLuyThua(int a, int b) {
    long long result = 1;
    if (a >= 1 && a <= 10 && b >= 0 && b <= 10) {
        for (int i = 1; i <= b; i++) {
        result *= a;
    }
    return result;
    }
    return 0;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << tinhLuyThua(a, b) << endl;
    return 0;
}