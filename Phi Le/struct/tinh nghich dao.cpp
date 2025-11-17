#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const int MAX = 100;
const double EPSILON = 1e-10;

// ============ PHƯƠNG PHÁP 1: DÙNG MA TRẬN PHẦN BÙ ĐẠI SỐ (Cofactor) ============

// Hàm tạo ma trận con bỏ hàng row và cột col
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

// Hàm tính định thức bằng đệ quy
double tinhDinhThuc(double matrix[][MAX], int n) {
    if (n == 1) {
        return matrix[0][0];
    }

    if (n == 2) {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    }

    double dinhThuc = 0;
    double matranCon[MAX][MAX];

    for (int j = 0; j < n; j++) {
        taoMatranCon(matrix, matranCon, n, 0, j);
        double dau = (j % 2 == 0) ? 1 : -1;
        dinhThuc += dau * matrix[0][j] * tinhDinhThuc(matranCon, n - 1);
    }

    return dinhThuc;
}

// Tính ma trận nghịch đảo bằng phương pháp Cofactor
bool nghichDaoCofactor(double matrix[][MAX], double inverse[][MAX], int n) {
    // Tính định thức
    double det = tinhDinhThuc(matrix, n);

    // Nếu định thức = 0 thì không tồn tại ma trận nghịch đảo
    if (abs(det) < EPSILON) {
        cout << "Ma tran khong kha nghich (dinh thuc = 0)" << endl;
        return false;
    }

    // Tính ma trận phần bù đại số (cofactor matrix)
    double cofactor[MAX][MAX];
    double matranCon[MAX][MAX];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Tạo ma trận con bỏ hàng i, cột j
            taoMatranCon(matrix, matranCon, n, i, j);

            // Tính cofactor: C[i][j] = (-1)^(i+j) * det(minor)
            double dau = ((i + j) % 2 == 0) ? 1 : -1;
            cofactor[i][j] = dau * tinhDinhThuc(matranCon, n - 1);
        }
    }

    // Ma trận nghịch đảo = (ma trận chuyển vị của cofactor) / định thức
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            inverse[i][j] = cofactor[j][i] / det; // Chuyển vị: [j][i]
        }
    }

    return true;
}

// ============ PHƯƠNG PHÁP 2: GAUSS-JORDAN ============

// Tính ma trận nghịch đảo bằng phương pháp Gauss-Jordan
bool nghichDaoGaussJordan(double matrix[][MAX], double inverse[][MAX], int n) {
    // Tạo ma trận mở rộng [A|I]
    double augmented[MAX][2 * MAX];

    // Sao chép ma trận A vào phần bên trái
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            augmented[i][j] = matrix[i][j];
        }
    }

    // Tạo ma trận đơn vị I ở phần bên phải
    for (int i = 0; i < n; i++) {
        for (int j = n; j < 2 * n; j++) {
            augmented[i][j] = (j == i + n) ? 1 : 0;
        }
    }

    // Khử Gauss-Jordan: đưa ma trận về dạng [I|A^-1]
    for (int i = 0; i < n; i++) {
        // Tìm pivot (phần tử lớn nhất ở cột i)
        int maxRow = i;
        for (int k = i + 1; k < n; k++) {
            if (abs(augmented[k][i]) > abs(augmented[maxRow][i])) {
                maxRow = k;
            }
        }

        // Nếu pivot = 0, ma trận không khả nghịch
        if (abs(augmented[maxRow][i]) < EPSILON) {
            cout << "Ma tran khong kha nghich" << endl;
            return false;
        }

        // Đổi hàng
        if (maxRow != i) {
            for (int j = 0; j < 2 * n; j++) {
                swap(augmented[i][j], augmented[maxRow][j]);
            }
        }

        // Chia hàng i cho phần tử chéo để được 1
        double pivot = augmented[i][i];
        for (int j = 0; j < 2 * n; j++) {
            augmented[i][j] /= pivot;
        }

        // Khử các phần tử ở cột i (cả trên và dưới)
        for (int k = 0; k < n; k++) {
            if (k != i) {
                double factor = augmented[k][i];
                for (int j = 0; j < 2 * n; j++) {
                    augmented[k][j] -= factor * augmented[i][j];
                }
            }
        }
    }

    // Sao chép ma trận nghịch đảo từ phần bên phải
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            inverse[i][j] = augmented[i][j + n];
        }
    }

    return true;
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

// Hàm in ma trận với định dạng đẹp
void inMatran(double matrix[][MAX], int n) {
    cout << fixed << setprecision(4);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(10) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Hàm nhân 2 ma trận để kiểm tra
void nhanMatran(double A[][MAX], double B[][MAX], double C[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// ============ CHƯƠNG TRÌNH CHÍNH ============

int main() {
    int choice;

    cout << "=============================================" << endl;
    cout << "  CHUONG TRINH TINH MA TRAN NGHICH DAO" << endl;
    cout << "=============================================" << endl;
    cout << "1. Nhap ma tran tu ban phim" << endl;
    cout << "2. Su dung ma tran mau 3x3 (kha nghich)" << endl;
    cout << "3. Su dung ma tran mau 4x4 (kha nghich)" << endl;
    cout << "4. Su dung ma tran mau 3x3 (khong kha nghich)" << endl;
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
            {2, 1, 1},
            {1, 3, 2},
            {1, 0, 0}
        };
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                matrix[i][j] = temp[i][j];
    } else if (choice == 3) {
        n = 4;
        double temp[4][4] = {
            {1, 2, 0, 1},
            {0, 1, 1, 0},
            {1, 0, 1, 1},
            {0, 1, 0, 1}
        };
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                matrix[i][j] = temp[i][j];
    } else {
        n = 3;
        double temp[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                matrix[i][j] = temp[i][j];
    }

    cout << "\n=====================" << endl;
    cout << "MA TRAN GOC A:" << endl;
    cout << "=====================" << endl;
    inMatran(matrix, n);

    // Chọn phương pháp
    cout << "\n=====================" << endl;
    cout << "CHON PHUONG PHAP:" << endl;
    cout << "=====================" << endl;
    cout << "1. Phuong phap Cofactor (De quy)" << endl;
    cout << "2. Phuong phap Gauss-Jordan" << endl;
    cout << "3. Ca hai phuong phap" << endl;
    cout << "Lua chon: ";
    int method;
    cin >> method;

    double inverse[MAX][MAX];

    if (method == 1 || method == 3) {
        cout << "\n========================================" << endl;
        cout << "PHUONG PHAP COFACTOR:" << endl;
        cout << "========================================" << endl;

        if (n <= 5) {
            if (nghichDaoCofactor(matrix, inverse, n)) {
                cout << "\nMa tran nghich dao A^-1:" << endl;
                inMatran(inverse, n);

                // Kiểm tra: A * A^-1 = I
                double result[MAX][MAX];
                nhanMatran(matrix, inverse, result, n);
                cout << "\nKiem tra A * A^-1 = I:" << endl;
                inMatran(result, n);
            }
        } else {
            cout << "Ma tran qua lon cho phuong phap Cofactor (n > 5)" << endl;
        }
    }

    if (method == 2 || method == 3) {
        cout << "\n========================================" << endl;
        cout << "PHUONG PHAP GAUSS-JORDAN:" << endl;
        cout << "========================================" << endl;

        if (nghichDaoGaussJordan(matrix, inverse, n)) {
            cout << "\nMa tran nghich dao A^-1:" << endl;
            inMatran(inverse, n);

            // Kiểm tra: A * A^-1 = I
            double result[MAX][MAX];
            nhanMatran(matrix, inverse, result, n);
            cout << "\nKiem tra A * A^-1 = I:" << endl;
            inMatran(result, n);
        }
    }

    cout << "\n========================================" << endl;
    cout << "SO SANH DO PHUC TAP:" << endl;
    cout << "==========================================";
}