#include <iostream>
#include <cmath>
using namespace std;

int binary_to_decimal(int n)
{
    int decimal = 0;
    int base = 1;
    int lastDigit;
    while (n > 0 )
    {
        lastDigit = n % 10;
        decimal += lastDigit * base;
        n /= 10;
        base *= 2;
    }
    return decimal;
}

int main()
{
    int binary;
    cout << "Nhap so nhi phan: ";
    cin >> binary;
    cout << binary_to_decimal(binary);
}