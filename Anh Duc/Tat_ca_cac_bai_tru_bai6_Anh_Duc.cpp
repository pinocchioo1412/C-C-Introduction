/******************* BAI SO 1 ****************/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s = 1;
    for(int i=1;i<=n;i++){
    s*=i;
    }
    cout<<s;
    return 0;
}
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x;
    cout << "Nhap gia tri cua co so x: ";
    cin >> x;
    double n;
    cout << "Nhap gia tri cua so mu n: ";
    cin >> n;
    cout << "Gia tri cua " << x <<"^" << n << " la: " << pow(x,n);
}
/******************* BAI SO 3 ****************/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    double S = 0;
    cin >> n;
    for(int i = 0; i <= n; i++){
        S += 1 / pow(2, i);
    }
    cout << "Tong S = " << S;
}
/******************* BAI SO 4 ****************/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x;
    cout << "Hay nhap so nguyen x: ";
    cin >> x;
    int a = 0;
    if (x<=1){
        cout << "Hay nhap gia tri khac >= 2";
    }
    if (x >=2){
        for (int i = 2; i<x; i++)
            if(x % i == 0){
                a+=1;
            }
    }
    if (a == 0){
        cout << "x la so nguyen to ";
    } else {
        cout << "x khong la so nguyen to ";
    }
}
/******************* BAI SO 14 ****************/
#include <iostream>
#include <cmath>
using namespace std;
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








