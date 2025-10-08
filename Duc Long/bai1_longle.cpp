#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int N;
	cin >> N;
	int factorial = 1;
	for(int i = 1; i <= N; i++){
		factorial *= i;
	}
	cout << "Giai thua cua " << N << " = " << factorial;
}
