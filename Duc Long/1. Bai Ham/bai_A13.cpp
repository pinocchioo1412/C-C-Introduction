#include <iostream>

using namespace std;

bool NamNhuan(int a) {
    if (a >= 1 && a <= 9999) {
        if ((a % 4 == 0 && a % 100 != 0 )|| a % 400 == 0) {
            return true;
        }
        else return false;
    }
    else return false;
}

int main() {
    int a;
    cin >> a;
    cout << NamNhuan(a);
    return 0;
}