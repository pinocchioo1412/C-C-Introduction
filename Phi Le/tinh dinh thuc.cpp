#include <iostream>
#include <cmath>
using namespace std;

const int MAX = 100;

// ============ PHƯƠNG PHÁP 1: ĐỆ QUY (dùng mảng) ============

// Hàm tạo ma trận con bằng cách bỏ đi hàng row và cột col
void taoMatranCon(double matrix[][MAX], double matranCon[][MAX], int n, int row, int col) {
    int hangMoi = 0;
    for (int i = 0; i < n; i++) {
        if (i == row) continue;

        int cotMoi = 0;
        for (int j = 0; j < n; j++) {
            if (j == col) continue;
            matranCon[hangMoi][cotMoi] = matrix[i][j];
            cotMoi++;
        }
        hangMoi++;
    }
}

// Hàm tính định thức bằng đệ quy (khai triển Laplace)
double tinhDinhThucDeQuy(double matrix[][MAX], int n) {
    // Trường hợp cơ sở: ma trận 1x1
    if (n == 1) {
        return matrix[0][0];
    }

    // Trường hợp cơ sở: ma trận 2x2
    if (n == 2) {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    }

    // Trường hợp đệ quy: khai triển theo hàng đầu tiên
    double dinhThuc = 0;
    double matranCon[MAX][MAX];

    for (int j = 0; j < n; j++) {
        // Tạo ma trận con bỏ hàng 0 và cột j
        taoMatranCon(matrix, matranCon, n, 0, j);
        // Công thức: det = Σ((-1)^j * a[0][j] * det(minor))
        double dau = (j % 2 == 0) ? 1 : -1;
        dinhThuc += dau * matrix[0][j] * tinhDinhThucDeQuy(matranCon, n - 1);
    }

    return dinhThuc;
}

// ============ PHƯƠNG PHÁP 2: KHỬ GAUSS ============

// Hàm tính định thức bằng phương pháp khử Gauss
double tinhDinhThucGauss(double matrix[][MAX], int n) {
    // Tạo bản sao để không làm thay đổi ma trận gốc
    double temp[MAX][MAX];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[i][j] = matrix[i][j];
        }
    }

    double det = 1; // Định thức ban đầu

    // Khử Gauss: đưa ma trận về dạng tam giác trên
    for (int i = 0; i < n; i++) {
        // Tìm phần tử khác 0 lớn nhất ở cột i (pivot)
        int maxRow = i;
        for (int k = i + 1; k < n; k++) {
            if (abs(temp[k][i]) > abs(temp[maxRow][i])) {
                maxRow = k;
            }
        }

        // Nếu phần tử chéo = 0, định thức = 0
        if (abs(temp[maxRow][i]) < 1e-10) {
            return 0;
        }

        // Đổi hàng nếu cần (mỗi lần đổi hàng, đổi dấu định thức)
        if (maxRow != i) {
            for (int j = 0; j < n; j++) {
                swap(temp[i][j], temp[maxRow][j]);
            }
            det *= -1; // Đổi dấu định thức
        }

        // Khử các phần tử phía dưới
        for (int k = i + 1; k < n; k++) {
            double factor = temp[k][i] / temp[i][i];
            for (int j = i; j < n; j++) {
                temp[k][j] -= factor * temp[i][j];
            }
        }

        // Nhân định thức với phần tử chéo
        det *= temp[i][i];
    }

    return det;
}

// ============ HÀM PHỤ TRỢ ============

// Hàm nhập ma trận
void nhapMatran(double matrix[][MAX], int n) {
    cout << "Nhap cac phan tu ma tran " << n << "x" << n << ":" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Phan tu [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

// Hàm in ma trận
void inMatran(double matrix[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

// ============ CHƯƠNG TRÌNH CHÍNH ============

int main() {
    int choice;

    cout << "======================================" << endl;
    cout << "  CHUONG TRINH TINH DINH THUC MA TRAN" << endl;
    cout << "======================================" << endl;
    cout << "1. Nhap ma tran tu ban phim" << endl;
    cout << "2. Su dung ma tran mau (3x3)" << endl;
    cout << "3. Su dung ma tran mau (4x4)" << endl;
    cout << "Lua chon cua ban: ";
    cin >> choice;

    double matrix[MAX][MAX];
    int n;

    if (choice == 1) {
        cout << "\nNhap kich thuoc ma tran (nxn): ";
        cin >> n;
        nhapMatran(matrix, n);
    } else if (choice == 2) {
        n = 3;
        double temp[3][3] = {
            {6, 1, 1},
            {4, -2, 5},
            {2, 8, 7}
        };
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                matrix[i][j] = temp[i][j];
    } else {
        n = 4;
        double temp[4][4] = {
            {2, 1, 3, 4},
            {1, 0, 1, 2},
            {3, 1, 2, 1},
            {1, 2, 3, 0}
        };
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                matrix[i][j] = temp[i][j];
    }

    cout << "\n==================" << endl;
    cout << "MA TRAN " << n << "x" << n << ":" << endl;
    cout << "==================" << endl;
    inMatran(matrix, n);

    cout << "\n==================" << endl;
    cout << "KET QUA:" << endl;
    cout << "==================" << endl;

    // Tính bằng phương pháp đệ quy
    if (n <= 6) { // Chỉ dùng đệ quy với ma trận nhỏ
        double detDeQuy = tinhDinhThucDeQuy(matrix, n);
        cout << "Dinh thuc (Phuong phap De quy): " << detDeQuy << endl;
    } else {
        cout << "Ma tran qua lon cho phuong phap de quy (n > 6)" << endl;
    }

    // Tính bằng phương pháp khử Gauss
    double detGauss = tinhDinhThucGauss(matrix, n);
    cout << "Dinh thuc (Phuong phap Khu Gauss): " << detGauss << endl;

    cout << "\n==================" << endl;
    cout << "SO SANH DO PHUC TAP:" << endl;
    cout << "==================" << endl;
    cout << "- De quy (Laplace): O(n!) - Chi tot voi ma tran nho (n <= 6)" << endl;
    cout << "- Khu Gauss: O(n^3) - Tot voi ma tran lon" << endl;

    return 0;
}