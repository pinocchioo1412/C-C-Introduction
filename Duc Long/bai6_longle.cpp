#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    int x = 0;
    cin >> n;
    for (int i = n/3; i >= 0; i--) {
        if (n - pow(2, i) > 0) {
            x = i;
        }
    cout << x << endl;

    }
}
