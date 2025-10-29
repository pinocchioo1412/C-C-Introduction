#include <iostream>
#include <cmath>
using namespace std;

int mu(int a, int n)
{
    int gia_tri = 1;
    if ( 1 <= a <= 10 && 0 <= n <= 10)
    {
        for (int i = 0 ; i < n ; i++)
        {
            gia_tri *= a;
        }
    }
    return gia_tri;
}

int main()
{
    int a , b;
    cin >> a >> b;
    cout << mu(a , b);
}