#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int hoa = 0 , thuong = 0 , so = 0;
    int khong_hop_le = 0;

    for (int i = 0 ; i < s.length() ; i++)
    {
        if (isupper(s[i]))
        {
            hoa++;
        }
        else if (islower(s[i]))
        {
            thuong++;
        }
        else if (isdigit(s[i]))
        {
            so++;
        }
        else
        {
            khong_hop_le++;
        }
    }
    cout << "so ky tu in hoa la: " << hoa << endl;
    cout << "so ky tu thuong la: " << thuong << endl;
    cout << "so ky tu so la: " << so << endl;
    cout << "so ky tu khong hop le la: " << khong_hop_le << endl;
}