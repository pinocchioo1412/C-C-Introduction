#include <iostream>
using namespace std;

bool nguyenTo(int n) {
    if (n >= 1 && n <= 1000) {
        if (n == 1) return false;
        for (int i = 2; i*i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
    else return false;
}

int main() {
    int n, count = 0;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (nguyenTo(i)) count++;
    }
    cout << count << endl;
    return 0;
}