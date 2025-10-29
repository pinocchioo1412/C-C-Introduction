#include <iostream>

using namespace std;

int NhiPhanSangThapPhan(int n) {
    if (n <= 1e11) {
        int thapPhan = 0;
        int bacSo = 1;

        while (n > 0) {
            int chuSo = n % 10;
            thapPhan += chuSo * bacSo;
            bacSo *= 2;
            n /= 10;
        }
        return thapPhan;
    }
    return 0;

}

int main() {
    int n;
    cin >> n;
    cout << NhiPhanSangThapPhan(n) << endl;
    return 0;
}