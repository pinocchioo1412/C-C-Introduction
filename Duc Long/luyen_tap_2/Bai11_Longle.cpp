#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int hoa = 0, thuong = 0, so = 0, ki_tu = 0;
    for (auto c : s) {
        if (c >= '0' && c <= '9') {
            so += 1;
        }
        else if (c >= 'a' && c <= 'z') {
            thuong += 1;
        }
        else if (c >= 'A' && c <= 'Z') {
            hoa += 1;
        }
        else ki_tu += 1;
    }
    cout << "Hoa = " << hoa << endl;
    cout << "Thuong = " << thuong << endl;
    cout << "So = " << so << endl;
    cout << "Ki tu dac biet = " << ki_tu << endl;
    return 0;
}
