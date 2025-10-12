#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "nhap so luong phan tu: ";
    cin >> n;

    int a[n];
    for (int i = 0 ; i < n ; i++)
    {
        cout << "nhap tu thu " << (i + 1) << ": ";
        cin >> a[i];
    }

    int max = a[0];
    for (int j = 0 ; j < n ; j++)
    {
        if (a[j] > max)
        {
            max = a[j];
        }
    }
    cout << max << endl;
}