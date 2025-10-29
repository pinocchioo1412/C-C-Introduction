#include <cmath>
#include <iostream>
using namespace std;

bool chinh_phuong(int a)
{
    if (a < 0) return false;
    int n = sqrt(a);
    return n * n == a;
}

int main()
{
    int a;
    cin >> a;
    if ( chinh_phuong(a) ) cout << "Yes" << endl;
    else cout << "No" << endl;
}