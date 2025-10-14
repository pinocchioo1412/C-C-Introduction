#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a = 0;
    if(n <= 1){
        cout << "Hay nhap so khac >= 2";
    }
    if(n >= 2){
        // toi uu doan ben duoi di
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                a+=i;
            }
        }
    }
    if(a == 0){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}