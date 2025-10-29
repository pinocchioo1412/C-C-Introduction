#include <iostream>
#include <cmath>
using namespace std;

bool prime(int i)
{
    if (i < 2) return false;
    for (int j = 2 ; j <= sqrt(i) ; j++)
    {
        if (i % j == 0)
        {
            return false;
        }
    }
    return true;
}

int dem_nguyen_to(int a)
{
    int so_luong = 0;
    if (a < 1 || a > 1000) return 0;
    for ( int i = 2; i < a; i++)
    {
        if (prime(i))
        {
            so_luong += 1;
        }
    }
    return so_luong;
}

int main()
{
    int a;
    cin >> a;
    cout << dem_nguyen_to(a);
}