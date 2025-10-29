#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double a,b;
    cin >> a >> b;
    double thuong = a / b;
    thuong = round(thuong * 100) / 100; //lam tron den 2 chu so
    cout << thuong;
}