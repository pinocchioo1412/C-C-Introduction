#include <iostream>
using namespace std;

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

    int max1 = *p;
    int max2;

    for (int i = 0; i < n - 1; i++)
    {
        if (*(p + 1) > max1)
        {

        }
    }
}