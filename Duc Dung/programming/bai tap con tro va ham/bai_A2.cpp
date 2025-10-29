#include <iostream>
#include <iomanip>
using namespace std;

double tong(int a)
{
    double tong = 0;
    if (a != 0)
    {
        for (double i = 1 ; i <= a ; i++)
        {
            tong += 1/i;
        }
    }
    return tong;
}

int main()
{
    int x;
    cin >> x;
    cout << fixed << setprecision(6) << tong(x) << endl;
}