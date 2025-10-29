#include <cmath>
# include <iostream>
#include <math.h>
using namespace std;

int dem_so_chu(int a)
{
    int dem_chu = 0;
    if (a == 0) return 1;
    if (a > 0)
    {
        while (a > 0)
        {
            dem_chu += 1;
            a = a/10;
        }
    }
    return dem_chu;
}

int main()
{
    int x;
    cin >> x;
    cout << dem_so_chu(x);
}