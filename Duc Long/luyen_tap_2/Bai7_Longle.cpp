#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s = to_string(n);
    string palindrome = "Yes";
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - i - 1]) {
            palindrome = "No";
        }
    }
    cout << palindrome;
}