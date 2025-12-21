#include <iostream>
#include <fstream>
using namespace std;

class vector {
public:
    double hoanh_do, tung_do, cao_do;

    vector(double a, double b, double c) {
        this->hoanh_do = a;
        this->tung_do = b;
        this->cao_do = c;
    }

    vector() {
        this->hoanh_do = 0;
        this->tung_do = 0;
        this->cao_do = 0;
    }

    void SetHD(double a) {this ->hoanh_do = a;}
    void SetTUN(double a) {this->tung_do = a;}
    void SetCAO(double a) {this->cao_do = a;}

    vector TongVec(vector a, vector b) {
        vector c;
        c.hoanh_do = a.hoanh_do + b.hoanh_do;
        c.tung_do = a.tung_do + b.tung_do;
        c.cao_do = a.cao_do + b.cao_do;
        return c;
    }

    vector HieuVec(vector a, vector b) {
        vector c;
        c.hoanh_do = a.hoanh_do - b.hoanh_do;
        c.tung_do = a.tung_do - b.tung_do;
        c.cao_do = a.cao_do - b.cao_do;
        return c;
    }

    vector NhanHangSo(vector a, double b) {
        this -> hoanh_do = a.hoanh_do * b;
        this -> tung_do = a.tung_do * b;
        this -> cao_do = a.cao_do * b;
        return a;
    }

    double NhanVoHuong(vector a, vector b) {
        return a.hoanh_do*b.hoanh_do + a.tung_do*b.tung_do + a.cao_do*b.cao_do;
    }
};

int main() {
    vector a(1,3,6);
    vector b(2,4,7);
    double k = 3;
    vector c();
    vector c = a.TongVec(a,b);
}