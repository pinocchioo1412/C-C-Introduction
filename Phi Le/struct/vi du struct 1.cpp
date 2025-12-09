#include<iostream>
using namespace std;
float bmi(float a, float b) {
    return a/(b*b)*10000;
}
struct concho {
    float cannang;
    float chieucao;
    string ten;
    string loai;
    float bmi1 ;
};
void swap(concho &a, concho &b) {
    concho temp = a;
    a = b;
    b = temp;
}
void output(concho &a) {
    cout << "Can nang la : " << a.cannang << endl;
    cout << "Chieu cao la : " << a.chieucao << endl;
    cout << "Ten la : " << a.ten<< endl;
    cout << "Loai la : " << a.loai<< endl;
    a.bmi1 = bmi(a.cannang,a.chieucao);
    cout << "BMI la : " << a.bmi1 << endl;
}
void input(concho &a) {
    cin >> a.cannang;
    cin >> a.chieucao;
    cin.ignore();
    getline(cin,a.ten);
    getline(cin,a.loai);
}
int main() {
    concho chuongcho[3];
    for ( int i = 0 ; i < 3; i ++) {
        input(chuongcho[i]);
    }
    for ( int i = 0 ; i < 3; i ++) {
        for (int j = i+1 ;j < 3; j++) {
            if (chuongcho[i].cannang > chuongcho[j].cannang) {
                swap(chuongcho[i],chuongcho[j]);
            }
        }
    }
    for ( int i = 0 ; i < 3; i ++) {
        output(chuongcho[i]);
    }
}



