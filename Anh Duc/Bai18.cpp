#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    int q = 1;
    for (int i = 1; i <= 10; i++) {
        q = n*i;
        cout << q << endl;
    }
}