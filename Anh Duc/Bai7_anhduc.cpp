#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int q = n;
    int a = 0;
    for(int i ; n!= 0; ){
        i = n%10;
        a = a * 10 + i;
        n/=10;
    }
    if( a == q){
        cout << "yes";
    }
    else {
        cout << "no";
    }
}