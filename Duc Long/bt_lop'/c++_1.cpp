// ================= BÀI 1: TÍNH TÍCH PHÂN =================
/*
#include <iostream>
#include <cmath>

using namespace std;
double f(double x) {
    return (pow(x,3)+1) / (pow(x,5) - 1);
}

double TichPhan(double a, double b, int N = 10000) {
    double h = (b - a) / N;
    double sum = f(a) + f(b);

    for (int i = 1; i < N; i++) {
        double x = a + i * h;
        sum += f(x) * 2;
    }
    return sum * h / 2;
}

void solve() {
    double a, b;
    cin >> a >> b;
    if ((a==1 || b==1) && (a < 1 && b > 1)) {
        cout << "Khong xac dinh" << endl;
    }
    else {
        cout << TichPhan(a, b);
    }
}

int main() {
    solve();
    return 0;
}
*/


// ================= BÀI 2: KIỂM TRA ĐIỂM TRONG HÌNH CẦU (VECTOR) =================
/*
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Vector3D {
    double x, y, z;
};

double tinhKhoangCach(Vector3D p1, Vector3D p2) {
    return sqrt(pow(p2.x - p1.x, 2) +
                pow(p2.y - p1.y, 2) +
                pow(p2.z - p1.z, 2));
}

bool soSanh(double d, double r) {
    return d <= r;
}

int main() {
    vector<Vector3D> diem(2);
    double r;

    cout << "Nhap tam(x; y; z): ";
    cin >> diem[0].x >> diem[0].y >> diem[0].z;

    cout << "Nhap diem can kiem tra (x y z): ";
    cin >> diem[1].x >> diem[1].y >> diem[1].z;

    cout << "Nhap ban kinh r: ";
    cin >> r;

    double d = tinhKhoangCach(diem[0], diem[1]);

    if (soSanh(d, r)) {
        cout << "=> Diem thuoc mat cau." << endl;
    } else {
        cout << "=> Diem nam ngoai mat cau." << endl;
    }

    return 0;
}
*/

// ================= BÀI 3: THÁP HÀ NỘI (HANOI TOWER) =================
/*
#include <iostream>
using namespace std;

int soBuoc = 0;

void thapHaNoi(int n, char nguon, char trungGian, char dich) {
    if (n == 1) {
        soBuoc++;
        cout << "Buoc " << soBuoc << ": Chuyen dia 1 tu " << nguon << " sang " << dich << endl;
        return;
    }

    thapHaNoi(n - 1, nguon, dich, trungGian);
    soBuoc++;
    cout << "Buoc " << soBuoc << ": Chuyen dia " << n << " tu " << nguon << " sang " << dich << endl;
    thapHaNoi(n - 1, trungGian, nguon, dich);
}

int main() {
    int n;
    cout << "Nhap so dia: ";
    cin >> n;
    thapHaNoi(n, 'A', 'B', 'C');
    cout << "Tong so buoc di chuyen: " << soBuoc << endl;
    return 0;
}
*/