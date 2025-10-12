#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n >= 0){
        for(; n != 0; ){
            cout << n % 10;
            n /= 10;
        }
    }
    else {
        cout << "error";
    }
}//
// Created by OS on 10/12/2025.
//