#include <iostream>
using namespace std;

int main()
{
    int i,n;
    cin >> n;
    int gia_tri = 1;
    for (i=1; i<= n; i++) gia_tri *=i;
    cout << gia_tri;
}
