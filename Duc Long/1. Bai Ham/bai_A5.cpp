#include<iostream>
using namespace std;

string soDoiXung(int n){
    string s = to_string(n);

    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - i - 1]) {
            return "No";
        }
    }
    return "Yes";
}

int main() {
    int n;
    cin >> n;
    cout << soDoiXung(n);
}

