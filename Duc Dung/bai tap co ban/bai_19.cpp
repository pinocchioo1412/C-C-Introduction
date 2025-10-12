#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    double sum = 0;
    cout << "nhap n : ";
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "nhap phan tu thu " << i + 1<< " : ";
        cin >> a[i];
        sum += a[i];
    }
    sum = round(sum / n);
    cout << "trung binh cong = " << sum << endl;
}