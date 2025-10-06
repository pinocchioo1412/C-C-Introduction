#include <iostream>
using namespace std;

int main()
{
    int x,n;
    cout << "nhap gia tri x: " << endl;
    cin >> x;
    cout << "nhap gia tri n: " << endl;
    cin >> n;
    int gia_tri = 1;
    for (int i=0; i < n; i++) gia_tri *= x;
    cout << gia_tri;
}