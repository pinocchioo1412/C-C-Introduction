#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <vector>

using namespace std;

class Calendar {
private:
    int year;
    int month;
    
    // Tên các tháng
    string monthNames[12] = {
        "Thang Mot", "Thang Hai", "Thang Ba", "Thang Tu",
        "Thang Nam", "Thang Sau", "Thang Bay", "Thang Tam",
        "Thang Chin", "Thang Muoi", "Thang Muoi Mot", "Thang Muoi Hai"
    };
    
    // Tên các thứ
    string dayNames[7] = {
        "CN", "T2", "T3", "T4", "T5", "T6", "T7"
    };
    
    // Kiểm tra năm nhuận
    bool isLeapYear(int y) {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }
    
    // Số ngày trong tháng
    int getDaysInMonth(int m, int y) {
        int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (m == 2 && isLeapYear(y)) {
            return 29;
        }
        return days[m - 1];
    }
    
    // Tính ngày đầu tiên của tháng (0=CN, 1=T2,...,6=T7)
    int getFirstDayOfMonth(int m, int y) {
        tm time = {};
        time.tm_year = y - 1900;
        time.tm_mon = m - 1;
        time.tm_mday = 1;
        mktime(&time);
        return time.tm_wday;
    }
    
public:
    Calendar(int y = 0, int m = 0) {
        if (y == 0 || m == 0) {
            time_t now = time(0);
            tm* ltm = localtime(&now);
            year = (y == 0) ? (1900 + ltm->tm_year) : y;
            month = (m == 0) ? (1 + ltm->tm_mon) : m;
        } else {
            year = y;
            month = m;
        }
    }
    
    // In header lịch
    void printHeader() {
        cout << "\n";
        cout << "========================================\n";
        cout << "           LICH NAM " << year << "\n";
        cout << "       " << monthNames[month - 1] << " (Thang " << month << ")\n";
        cout << "========================================\n\n";
    }
    
    // In lịch tháng
    void printMonth() {
        printHeader();
        
        // In các thứ
        for (int i = 0; i < 7; i++) {
            cout << setw(4) << dayNames[i] << " ";
        }
        cout << "\n";
        cout << "-------------------------------------\n";
        
        int firstDay = getFirstDayOfMonth(month, year);
        int daysInMonth = getDaysInMonth(month, year);
        
        // In khoảng trắng cho các ngày trước ngày 1
        for (int i = 0; i < firstDay; i++) {
            cout << "     ";
        }
        
        // In các ngày trong tháng
        int dayOfWeek = firstDay;
        for (int day = 1; day <= daysInMonth; day++) {
            cout << setw(4) << day << " ";
            dayOfWeek++;
            
            if (dayOfWeek == 7) {
                cout << "\n";
                dayOfWeek = 0;
            }
        }
        
        if (dayOfWeek != 0) {
            cout << "\n";
        }
        cout << "=====================================\n\n";
    }
    
    // In cả năm
    void printYear() {
        cout << "\n";
        cout << "================================================\n";
        cout << "              LICH NAM " << year << "\n";
        cout << "================================================\n";
        
        for (int m = 1; m <= 12; m++) {
            month = m;
            printMonth();
        }
    }
    
    // In ngày hiện tại
    void printToday() {
        time_t now = time(0);
        tm* ltm = localtime(&now);
        
        int day = ltm->tm_mday;
        int currentMonth = 1 + ltm->tm_mon;
        int currentYear = 1900 + ltm->tm_year;
        int dayOfWeek = ltm->tm_wday;
        
        cout << "\n";
        cout << "========================================\n";
        cout << "           THONG TIN HOM NAY\n";
        cout << "========================================\n";
        cout << "Thu:      " << dayNames[dayOfWeek] << "\n";
        cout << "Ngay:     " << day << "/" << currentMonth << "/" << currentYear << "\n";
        cout << "Gio:      " << setfill('0') << setw(2) << ltm->tm_hour << ":"
             << setw(2) << ltm->tm_min << ":" << setw(2) << ltm->tm_sec << "\n";
        cout << "========================================\n\n";
        cout << setfill(' ');
    }
};

// Hàm hiển thị menu
void displayMenu() {
    cout << "\n";
    cout << "========================================\n";
    cout << "       CHUONG TRINH LICH AM DUONG\n";
    cout << "========================================\n";
    cout << "1. Xem lich thang hien tai\n";
    cout << "2. Xem lich thang bat ky\n";
    cout << "3. Xem lich ca nam\n";
    cout << "4. Xem thong tin hom nay\n";
    cout << "0. Thoat chuong trinh\n";
    cout << "========================================\n";
    cout << "Nhap lua chon cua ban: ";
}

int main() {
    int choice;
    int year, month;
    
    // Lấy năm hiện tại
    time_t now = time(0);
    tm* ltm = localtime(&now);
    int currentYear = 1900 + ltm->tm_year;
    int currentMonth = 1 + ltm->tm_mon;
    
    do {
        displayMenu();
        cin >> choice;
        
        switch (choice) {
            case 1: {
                // Lịch tháng hiện tại
                Calendar cal;
                cal.printMonth();
                break;
            }
            case 2: {
                // Lịch tháng bất kỳ
                cout << "Nhap nam (VD: 2025): ";
                cin >> year;
                cout << "Nhap thang (1-12): ";
                cin >> month;
                
                if (month < 1 || month > 12) {
                    cout << "Thang khong hop le!\n";
                    break;
                }
                
                Calendar cal(year, month);
                cal.printMonth();
                break;
            }
            case 3: {
                // Lịch cả năm
                cout << "Nhap nam (VD: 2025): ";
                cin >> year;
                
                Calendar cal(year, 1);
                cal.printYear();
                break;
            }
            case 4: {
                // Thông tin hôm nay
                Calendar cal;
                cal.printToday();
                break;
            }
            case 0:
                cout << "\nCam on ban da su dung chuong trinh!\n";
                break;
            default:
                cout << "\nLua chon khong hop le! Vui long chon lai.\n";
        }
        
        if (choice != 0) {
            cout << "\nNhan Enter de tiep tuc...";
            cin.ignore();
            cin.get();
        }
        
    } while (choice != 0);
    
    return 0;
}