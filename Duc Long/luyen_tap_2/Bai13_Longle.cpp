#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int maxVal = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > maxVal) maxVal = x;
    }

    cout << maxVal;
    return 0;
}