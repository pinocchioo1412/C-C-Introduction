#include <iostream>
using namespace std;

bool palinedrome(int s)
{
    int original = s;
    int reversed = 0;
    int remainder;

    while (s != 0)
    {
        remainder = s % 10;
        reversed = reversed * 10 + remainder;
        s = s / 10;
    }

    return original == reversed;
}

int main()
{
    int s;
    cin >> s;

    if (palinedrome(s))
    {
        cout << "doi xung";
    }
    else cout << "khong doi xung";
}