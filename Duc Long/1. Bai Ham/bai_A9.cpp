#include <iostream>
using namespace std;

int TongUoc(int n) {

    if (n >= 1 &&n <= 10000) {
        int sum = 0;
        for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n/i) sum += n/i;
        }
    }
    return sum;
    }
    return 0;

}

int main() {
    int n;
    cin >> n;
    cout << TongUoc(n) << endl;
    return 0;
}