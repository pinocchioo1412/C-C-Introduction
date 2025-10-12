#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int c; n!= 0; ){
        c = n % 10;
        sum += c;
        n /= 10;

    }
    cout << sum;
}