#include<iostream>
using namespace std;
int dequy(int a) {
    if (a==0 || a == 1) return 1;
    return a*dequy(a-1);
}
int binhphuong(int &a) {
    a = 100;
    return 0;
}

int main() {
    int a;
    int b[10];
    cin >> a;
    cout << a << endl;
    binhphuong(a);
    cout << a;
}

