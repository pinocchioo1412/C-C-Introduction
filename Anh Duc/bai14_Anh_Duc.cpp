#include <iostream>
#include <cmath>
using namespace std;

// 14 nao day????
int main() {
    double a1, b1, c1;
    cout << "Nhap binh phuong 3 canh tam giac (a^2, b^2, c^2):\n";
    cout << "a^2 = ";
    cin >> a1;
    cout << "b^2 = ";
    cin >> b1;
    cout << "c^2 = ";
    cin >> c1;
    double a = sqrt(a1);
    double b = sqrt(b1);
    double c = sqrt(c1);
    if ((a + b) > c && (b + c) > a && (c + a) > b) {
        if (a == b && b == c) {
            cout << "Tam giac deu";
        }
        else if (a == b || b == c || c == a) {
            if (a1 + b1 == c1 || b1 + c1 == a1 || c1 + a1 == b1) {
                cout << "Tam giac vuong can";
            }
            else {
                cout << "Tam giac can";
            }
        }
        else if (a1 + b1 == c1 || b1 + c1 == a1 || c1 + a1 == b1) {
            cout << "Tam giac vuong khong can";
        }
        else if (a1 + b1 > c1 || b1 + c1 > a1 || a1 + c1 > b1) {
            cout << "Tam giac thuong va nhon";
        }
        else {
            cout << "Tam giac thuong va tu";
        }
    }
    else {
        cout << "Khong phai la tam giac";
    }
}
