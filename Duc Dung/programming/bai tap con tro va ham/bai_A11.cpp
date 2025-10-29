#include <iostream>
using namespace std;

int giai_thua_kep(int a)
{
    int result = 1;
    int i;
    for (int i = a ; i > 0 ; i -= 2)
    {
        result *= i;
    }

    return result;
}

int main()
{
    int n;
    cin >> n;
    cout << giai_thua_kep(n);
}