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

}//
// Created by OS on 10/5/2025.
//