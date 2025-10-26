#include<iostream>
using namespace std;

string sohoanhao(int a) {
    int tong = 0;
    if (a >= 1 && a <= 10000) {
        for (int i = 1; i < a; i++) {
            if (a % i == 0) {
                tong += i;
            }
        }
        if (tong == a) return "YES";
        else  return "No";
    }
    else return "ERROR";

}

int main() {
    int a;
    cin >> a;
    cout << sohoanhao(a);
}

