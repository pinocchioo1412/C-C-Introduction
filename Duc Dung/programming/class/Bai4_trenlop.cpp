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

//code dang cap
// #include <iostream>
// using namespace std;
//
// class Vector {
// public:
//     double hoanh_do, tung_do, cao_do;
//     static int count;
//     Vector(double g, double h, double k) {
//         this-> hoanh_do = g;
//         this-> tung_do = h;
//         this-> cao_do = k;
//         count ++;
//
//     }
//     Vector() {
//         hoanh_do = 0;
//         tung_do = 0;
//         cao_do = 0;
//         count ++;
//     }
//
//     Vector(const Vector &v) {
//         hoanh_do = v.hoanh_do;
//         tung_do = v.tung_do;
//         cao_do = v.cao_do;
//         count ++;
//     }
//     ~Vector() { count --; }
//
//     void sethoanh_do(double h) {this ->hoanh_do = h;}
//     void settung_do(double t) {this ->tung_do = t;}
//     void setcao_do(double c) {this -> cao_do = c;}
//
//     Vector Tong_vector(Vector b) {
//         Vector c;
//         c.hoanh_do = hoanh_do + b.hoanh_do;
//         c.tung_do = tung_do + b.tung_do;
//         c.cao_do = cao_do + b.cao_do;
//         return c;
//     }
//     Vector Tru_vector(Vector b) {
//         Vector c;
//         c.hoanh_do = hoanh_do - b.hoanh_do;
//         c.tung_do = tung_do - b.tung_do;
//         c.cao_do = cao_do - b.cao_do;
//         return c;
//     }
//     Vector Nhan_hang_so(double k) {
//         Vector v;
//         v.hoanh_do = hoanh_do*k ;
//         v.tung_do = tung_do*k;
//         v.cao_do = cao_do*k;
//         return v;
//     }
//     double Nhan_vo_huong(Vector& b) {
//         return hoanh_do*b.hoanh_do + tung_do*b.tung_do + cao_do*b.cao_do;
//     }
//
//     void In() {
//         cout << "(" << hoanh_do << ", " << tung_do << ", " << cao_do << ")" << endl;
//     }
// };
//
// int Vector:: count = 0;
//
// int main() {
//     Vector A(2,4,6);
//     Vector B(2,3,7);
//     double k = 2;
//     Vector T = A.Tong_vector(B);
//     cout << "Tong: " ; T.In();
//     Vector H = A.Tru_vector(B);
//     cout << "Hieu: " ; H.In();
//     Vector N = A.Nhan_hang_so(k);
//     cout << "Nhan hang so " << k << " voi A" << " : " ; N.In();
//     cout << A.Nhan_vo_huong(B) << endl;
//     cout << "So luong vector: " << Vector::count << endl;
// }