#include <iostream>

using namespace std;

int GiaiThuaKep(int n) {
    if (n >= 1 && n <= 15) {
        int KetQua = 1;
        for (int i = n; i >= 1; i -= 2) {
            KetQua *= i;
        }
        return KetQua;
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    cout << GiaiThuaKep(n);
    return 0;
}