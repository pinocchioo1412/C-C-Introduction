#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "nhap bang cuu chuong cua so: ";
    cin >> n;

    for (int i = 1 ; i <= 10 ; i++)
    {
        cout << n << "x" << i << " = " << n*i << endl;
    }
}