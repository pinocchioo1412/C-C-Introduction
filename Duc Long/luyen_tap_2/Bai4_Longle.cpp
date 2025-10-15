#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if ((a+b) > c && (a+c) > b && (b+c) > a) {
        cout << "Co";
    }
    else cout << "Khong";
}

 // dieu kien a,b,c > 0 dau?
