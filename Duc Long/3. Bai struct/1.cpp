#include<iostream>
#include<cmath>
using namespace std;

struct point{
    float hoanhDo, tungDo, chieuDai, chieuRong;
};

double khoangCach(point x){
    return sqrt( pow(x.hoanhDo, 2) + pow(x.tungDo, 2) );
}

double doDai(point a, point b){
    return sqrt( pow(a.hoanhDo - b.hoanhDo, 2) + pow(a.tungDo - b.tungDo, 2) );
}

double dienTich(point x){
    return x.chieuDai * x.chieuRong;
}

int main(){
    point a, b;
    cin >> a.hoanhDo >> a.tungDo;
    cin >> b.hoanhDo >> b.tungDo;
    cout << khoangCach(a) << endl;
    cout << doDai(a, b) << endl;

    point c;
    cin >> c.chieuDai >> c.chieuRong;
    cout << dienTich(c) << endl;

    return 0;
}