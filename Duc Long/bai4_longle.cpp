#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int x;
	cin >> x;
	int u = 0;

	if (x <= 1) cout << "dien so lon hon 1";
	if (x > 1){
	   for (int i = 2; i < int(sqrt(x)) + 1; i++){
		   if (x % i == 0){
			 u += 1;
		   }
	   }
       if (u == 0){
  	       cout << x << " la so nguyen to";
	   }
	   else {
		  cout << x << " khong phai la so nguyen to";
	   }
	}

}