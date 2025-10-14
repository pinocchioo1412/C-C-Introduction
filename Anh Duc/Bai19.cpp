#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    double dcm = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        dcm += a[i];
    }
    dcm = round(dcm/n);
    cout << dcm;
}