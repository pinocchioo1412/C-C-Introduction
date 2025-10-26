#include <iostream>
using namespace std;

int perfect(int a)
{
    int perfect = 0;
    for (int i = 1 ; i < a ; i++)
    {
        if (a % i == 0)
        {
            perfect += i;
        }
    }
    if (perfect == a)
    {
        cout << "Yes" << endl;
    }
    else  cout << "No" << endl;
}

int main()
{
    int x;
    cin >> x;
    perfect(x);
}