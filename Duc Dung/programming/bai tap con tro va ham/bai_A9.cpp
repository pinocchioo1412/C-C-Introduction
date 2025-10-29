#include <iostream>
using namespace std;

int tong_uoc(int a)
{
    int tong = 0;
    if (a <= 0) return 0;
    for (int i= 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            tong += i;
        }
    }
    return tong;
}

int main()
{
    int a;
    cin >> a;
    cout << tong_uoc(a);
}