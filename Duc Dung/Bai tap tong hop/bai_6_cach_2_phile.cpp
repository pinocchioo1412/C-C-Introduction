#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 0;
    while (n >= pow(2,x))
    {
        x++;
    }
    for (int j = x - 1; j >= 0; j--)
    {
        if (n >= pow(2,j))
        {
            cout<<"1";
            n -= pow(2,j);
        }
        else
        {
            cout<<"0";
        }
    }
}