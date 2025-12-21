#include <iostream>
#include <fstream>
using namespace std;

class HCN {
public:
    double dai;
    double rong;
    void setD(double dai) {this->dai = dai;}
    double getD(double dai) {return dai;}
    void setR(double rong) {this->rong = rong;}
    double getR(double rong) {return rong;}
    double CV(double dai, double rong) {return 2*(dai+rong);}
    double DT(double dai, double rong) {return dai*rong;}
};

int main() {
    HCN hcn[10];

    for (int i = 0; i < 10; i++) {
        hcn[i].setD(rand()%100);
        hcn[i].setR(rand()%100);
        cout << "chieu rong HCN " << i+1 << " :" << hcn[i].getR(hcn[i].rong) << endl;
        cout << "chieu dai HCN " << i+1 << " :" << hcn[i].getD(hcn[i].dai) << endl;
        cout << "Chu vi HCN thu " << i+1 << " = " << hcn[i].CV(hcn[i].dai,hcn[i].rong) << endl;
        cout << "Dien tich HCN thu " << i+1 << " = " << hcn[i].DT(hcn[i].dai,hcn[i].rong) << endl;
    }
}