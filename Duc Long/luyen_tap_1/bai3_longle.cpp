#include <iostream>
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