#include <iostream>
using namespace std;

class Vector {
public:
    double hoanh_do, tung_do, cao_do;
    Vector(double g, double h, double k) {
        this-> hoanh_do = g;
        this-> tung_do = h;
        this-> cao_do = k;
    }
    Vector() {}

    void sethoanh_do(double h) {this ->hoanh_do = h;}
    void settung_do(double t) {this ->tung_do = t;}
    void setcao_do(double c) {this -> cao_do = c;}

    Vector Tong_vector(Vector a, Vector b) {
        Vector c;
        double x = a.hoanh_do + b.hoanh_do;
        c.sethoanh_do(x);
        double y = a.tung_do + b.tung_do;
        c.settung_do(y);
        double z = a.cao_do + b.cao_do;
        c.setcao_do(z);
        return c;
    }
    Vector Tru_vector(Vector a, Vector b) {
        Vector c;
        double x = a.hoanh_do - b.hoanh_do;
        c.sethoanh_do(x);
        double y = a.tung_do - b.tung_do;
        c.settung_do(y);
        double z = a.cao_do - b.cao_do;
        c.setcao_do(z);
        return c;
    }
    Vector Nhan_hang_so(Vector a, double k) {
        a.hoanh_do = (a.hoanh_do)*k ;
        a.tung_do = (a.tung_do)*k;
        a.cao_do = (a.cao_do)*k;
        return a;
    }
    double Nhan_vo_huong(Vector a, Vector b) {
        return a.hoanh_do*b.hoanh_do + a.tung_do*b.tung_do + a.cao_do*b.cao_do;
    }
};

int main() {
    Vector a(2,4,6);
    Vector b(2,3,7);
    double k = 2;
    Vector T = a.Tong_vector(a, b);
    cout << "Tong: (" << T.hoanh_do << ", " << T.tung_do << ", " << T.cao_do << ")" << endl;
    Vector H = a.Tru_vector(a, b);
    cout << "Hieu : (" << H.hoanh_do << ", " << H.tung_do << ", " << H.cao_do << ")" << endl;
    Vector N = a.Nhan_hang_so(a, k);
    cout << "Nhan hang so: (" << N.hoanh_do << ", " << N.tung_do << ", " << N.cao_do << ")" << endl;
    cout << a.Nhan_vo_huong(a, b) << endl;
}