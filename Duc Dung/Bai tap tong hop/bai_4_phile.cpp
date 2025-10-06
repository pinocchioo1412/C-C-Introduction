#include <iostream>
#include <cmath>
using namespace std;

bool nguyen_to(int x) {
    if (x <= 1) {
        return false;
    }
    for (int j= 2; j < sqrt(x); j++) {
        if (x % j ==0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int x;
    cout << "nhap gia tri nguyen bat ky: ";
    cin >> x;
    if (nguyen_to(x)) {
        cout << x << " la so nguyen to";
    }
    else {
        cout << x << " khong la so nguyen to";
    }
}