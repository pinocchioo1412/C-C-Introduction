#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int maxVal = 0;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > maxVal) maxVal = a[i];
    }

    cout << maxVal;
    return 0;
}
// neu mang toan so am thi sao