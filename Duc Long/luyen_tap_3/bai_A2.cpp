#include <iostream>
#include <iomanip>
using namespace std;

double tinhtong(int n) {
    double tong = 0.0;
    for (int i = 1; i <= n; i++) {
        tong += 1.0/i;
    }
    return tong;
}

int main() {
    int n;
    cin >> n;

    double ans = tinhtong(n);
    cout << fixed << setprecision(6) << ans << endl;
}
