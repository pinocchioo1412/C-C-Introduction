#include <iostream>
#include <cmath>
using namespace std;

int fibonacci_gan(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, c = 1;

    while (c < n)
    {
        a = b;
        b = c;
        c = a + b;
    }
    if (abs(n - b) <= abs(n - c))
    {
        return b;
    }
    else return c;
}

int main()
{
    int n;
    cin >> n;
    cout << fibonacci_gan(n);
}