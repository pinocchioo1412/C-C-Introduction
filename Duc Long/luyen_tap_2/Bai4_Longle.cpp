#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0) {
        if ((a+b) > c && (a+c) > b && (b+c) > a) {
            cout << "Co";
        }
        else cout << "Khong";
    }
    else cout << "Dien lai";

}

 // dieu kien a,b,c > 0 dau?
