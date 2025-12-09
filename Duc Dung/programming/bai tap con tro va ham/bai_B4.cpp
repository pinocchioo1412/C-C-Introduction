#include <iostream>
#include <cmath>
using namespace std;

bool nguyen_to(int a)
{
    if (a < 2) return false;
    for (int i = 2 ; i <= sqrt(a) ; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << " : ";
        cin >> arr[i];
    }

    int *p = arr;
    int tong = 0;
    for (int i = 0 ; i < n ; i++)
    {
        if (nguyen_to(*( p + i )))
        {
            tong += *(p + i);
        }
    }
    cout << tong;
}