#include <iostream>
using namespace std;

void nam_nhuan(int n)
{
    if (n % 4 == 0)
    {
        if (n % 100 == 0)
        {
            if (n % 400 == 0)
            {
                cout << "Yes";
            }
            else cout << "No";
        }
        else cout << "Yes";
    }
    else cout << "No";
}

int main()
{
    int nam;
    cin >> nam;
    nam_nhuan(nam);
}