
#include<iomanip>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    cout << "Tong = " << a + b << endl;
    cout << "Hieu = " << a - b << endl;
    cout << "Tich = " << a * b << endl;
    double c = (double)a / b;
    cout << "Thuong = " << fixed << setprecision(2) << c << endl;
}