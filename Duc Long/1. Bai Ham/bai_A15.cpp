#include <iostream>

using namespace std;

int FiboGanNhat(int n) {
    if (n >= 1 && n <= 1000) {
        int a = 0, b = 1, c = 1;
        
        while (c < n) {
            a = b;
            b = c;
            c = a + b;
        }
        if (n < c) return b;
        else return c;
    }
    return 0;

}

int main() {
    int n;
    cin >> n;
    cout << FiboGanNhat(n) << endl;
    return 0;
}