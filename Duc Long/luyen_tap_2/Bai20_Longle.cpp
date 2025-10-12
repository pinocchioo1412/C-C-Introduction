#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename;
    cin >> filename;

    ifstream file(filename);
    if (!file) {
        cout << "Khong mo duoc file." << endl;
        return 1;
    }

    int lineCount = 0;
    string line;
    while (getline(file, line))
        lineCount++;

    cout << "So dong = " << lineCount << endl;
    file.close();
    return 0;
}