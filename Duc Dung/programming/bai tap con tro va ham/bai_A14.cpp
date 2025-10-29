#include <iostream>
using namespace std;

void tong_so_chan(int a)
{
    int so_chan = 0;
    int so;
    while (a > 0)
    {
        so = a % 10;
        if (so % 2 == 0)
        {
            so_chan += so;
        }
        a /= 10;
    }
    cout << so_chan << endl;
}

int main()
{
    int a;
    cin >> a;
    tong_so_chan(a);
}