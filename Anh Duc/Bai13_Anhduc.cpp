#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max = a[0];
    for (int m = 1; m < n; m++) {
        if (a[m] > max) {
            max = a[m];
        }
    }
    cout << max << endl;

}