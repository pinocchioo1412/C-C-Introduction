#include <iostream>
using namespace std;

int tich(int a)
{
    int tich = 1;
    for (int i = 1; i <= a; i++)
    {
        tich *= i;
    }
    return tich;
}

int main()
{
    int a;
    cin >> a;
    cout << tich(a);
}