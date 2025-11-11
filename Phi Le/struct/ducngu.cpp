#include <iostream>
using namespace std;
bool isLeapYear(int year) {
    // Năm nhuận là năm chia hết cho 400
    // hoặc chia hết cho 4 nhưng không chia hết cho 100
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return true;
    else
        return false;
}
int main() {
    int y = 2025;
    int d = (y - 2000);
    int i = (d + (d - 1) / 4) % 7;
    int month = 1;


    cout << "In lich " << y << "\n\n";

    while (month < 13) {
        cout << "\t\t     " << "Thang " << month << endl;
        cout << "CN\tT2\tT3\tT4\tT5\tT6\tT7\n";

        for (int j = 0; j < i; j++) cout << '\t';

        int days = 31;
        switch (month) {
            case 2:
                if (isLeapYear(y)) days = 29 ;
                else days = 28;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                --days; break;
        }

        //int days = (month == 2) ? (28 + !(y & 3)) : (30 + ((month + (month > 7)) & 1));

        for (int k = 1; k <= days; k++) {
            cout << k << '\t';
            if (i++ == 6) {
                cout << '\n';
                i = 0;
            }
        }

        cout << "\n\n";
        month++;
    }

    return 0;
}