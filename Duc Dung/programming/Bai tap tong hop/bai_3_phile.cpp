#include <iostream>
using namespace std;

int main()
{
    double i = 1;
    double S = 1;
    int n;
    cout << "nhap gia tri n: ";
    cin >> n;
    for (int j=1; j < n; j++) {
        i = i/2;
        S +=i;
    }
    cout << S;
}