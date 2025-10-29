#include <iostream>
using namespace std;

int UCLN(int a , int b , int c)
{
    int max = 1;
    int d;
    if (a < b && a < c)
    {
        d = a;
    }
    else if (b < a && b < c)
    {
        d = b;
    }
    else d = c;
    for (int i = 2; i < d; i++)
    {
        while (d % i == 0 && i > max)
        {
            max = i;
        }
    }
    return max;
}

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << UCLN(a, b, c);
}