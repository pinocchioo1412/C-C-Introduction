#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so luong phan tu : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap vao thu " << i + 1 << " : ";
        cin >> arr[i];
    }

    int *p = arr;
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (*(p + i) < min)
        {
            min = *(p + i);
        }
    }
    cout << min << endl;
}