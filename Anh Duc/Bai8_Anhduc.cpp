#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a0 = 0;
    cout << a0 << " ";
    int a1 = 1;
    cout << a1 << " ";
    // neu n = 1 thi sao?
    int a2;
    for(int i = 0; i <= n - 3; i++){
        a2 = a0 + a1;
        cout << a2 << " ";
        a0 = a1;
        a1 = a2;
    }
}