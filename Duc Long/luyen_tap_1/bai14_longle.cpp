#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Nhap 3 canh cua tam giac:";
    cin >> a >> b >> c;
    if ((a+b) > c && (a+c) > b && (b+c) > a) {
        if (a == b && b == c) {
            cout << "Tam giac deu";
        }
        else if (a == b || b == c || c == a) {
            if (a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a) {
                cout << "Tam giac vuong can";
            }
            else cout << "Tam giac can khong vuong";
        }
        else if (a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a) {
            cout << "Tam giac vuong khong can";
        }
        else if ((a+b) > c && (b+c) > a && (c+a) > b) {
            cout << "Tam giac tu hoac nhon";
        }
        else
            cout << "Dien lai";

    }
}