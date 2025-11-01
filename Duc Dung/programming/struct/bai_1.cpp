#include <iostream>
#include <cmath>
using namespace std;

struct point
{
    float hoanhdo;
    float tungdo;
};

struct hcn
{
    float chieudai;
    float chieurong;
};

double kc (point x)
{
    return sqrt(pow(x.hoanhdo,2) + pow(x.tungdo,2));
}

double dientich(hcn a)
{
    return a.chieudai*a.chieurong;
}

int main()
{
    hcn c;
    cin >> c.chieudai >> c.chieurong;
    cout << dientich(c);
}