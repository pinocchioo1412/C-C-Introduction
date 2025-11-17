#include <iostream>
using namespace std;

void sort1D(int a[], int n) {

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort1D(a, n);

}