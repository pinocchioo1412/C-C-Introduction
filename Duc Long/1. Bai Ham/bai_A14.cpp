#include <iostream>

using namespace std;

int TongChuSoChan(int n) {
    if (n >= 0 && n <= 1e10) {
        int tong = 0;

        while (n > 0) {
            int chuSo = n % 10;
            if (chuSo % 2 == 0) {
                tong += chuSo;
            }
            n /= 10;
        }
        return tong;
    }
    return -1;

}

int main() {
    int n;
    cin >> n;
    cout << TongChuSoChan(n) << endl;
    return 0;
}