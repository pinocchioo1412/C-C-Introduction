#include <iostream>
#include<cmath>
using namespace std;
int main() {
    string a;
    cin >> a;
    int m = 0;
    int n = 0;
    int q = 0;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            m+=1;
        } else if (a[i] >= 'a' && a[i] <= 'z') {
            n+=1;
        } else if (a[i] >= '0' && a[i] <= '9') {
            q+=1;
        }
    }
    cout << "In hoa: "<<  m << endl;
    cout << "In thuong: " <<  n << endl;
    cout << "In so: " <<  q << endl;

}