#include <iostream>
#include <cmath>
using namespace std;

void nhi_phan(int x) {
    if (x>1) {
        nhi_phan(x/2);
    }
    cout << (x%2);
}

int main()
{
    int x;
    cout << "nhap gia tri nguyen bat ky: ";
    cin >> x;
    nhi_phan(x);
}