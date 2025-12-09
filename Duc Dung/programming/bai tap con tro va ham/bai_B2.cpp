#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "so phan tu n: ";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << " : ";
        cin >> a[i];
    }

    int *p = a;
    int le;
    for (int i = 0; i < n; i++)
    {
        if (*(p + i) % 2 == 1)
        {
            le++;
        }
    }
    cout << le;
}