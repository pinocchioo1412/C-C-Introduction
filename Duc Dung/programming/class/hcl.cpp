// 1 class hcn, public: c dài, rộng, 2 phương thức void set( đặt) double get( lay dữ liệu), 2 pthuc: double chu vi dien tích
// main có for vs độ dài là n, vd: n = 10 hcn, in ra chu vi va dtich
#include <iostream>
#include <cstdlib>
using namespace std;

class HCN {
public:
    double dai;
    double rong;

    void setdai(double dai) { this->dai = dai;}
    void setrong(double rong) { this->rong = rong;}

    double getdai(double dai) { return dai;}
    double getrong(double rong) { return rong;}

    double chuvi(double dai, double rong) {
        return (dai + rong) * 2;
    }
    double dientich(double dai, double rong) {
        return dai * rong;
    }
};

int main() {
    HCN hcn[10];
    for (int i = 0; i < 10; i++)
    {
        hcn[i].setdai(rand()%100);
        hcn[i].setrong(rand()%100);
        cout << "chieu dai chu nhat thu " << i+1 << " = " << hcn[i].getdai(hcn[i].dai) << endl;
        cout << "chieu rong chu nhat thu " << i+1 << " = " << hcn[i].getrong(hcn[i].rong) << endl;
        cout << "chu vi chu nhat " << i+1 << " = " << hcn[i].chuvi(hcn[i].dai, hcn[i].rong) << endl;
        cout << "dien tich chu nhat " << i+1 << " = " << hcn[i].dientich(hcn[i].dai, hcn[i].rong) << endl;
        cout << endl;
    }
}