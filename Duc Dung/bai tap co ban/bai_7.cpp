#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool palinedrome = true;
    int len = s.length();

    for (int i = 0 ; i < len / 2 ; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            palinedrome = false;
            break;
        }
    }
    if (palinedrome)
    {
        cout << "doi xung";
    }
    else
    {
        cout << "khong doi xung";
    }
}