#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double thuong = double(a) / b;
    cout << "Tong = " << a + b << endl;
    cout << "Hieu = " << a - b << endl;
    cout << "Tich = " << a * b << endl;
    cout << "Thuong = " << fixed << setprecision(2) << thuong << endl;
}
// sua lai dung precision nhe