#include <iostream>
using namespace std;

bool isPalindrome(string &s, int i) {
    int n = s.length();
    if (i >= n / 2) return true;
    if (s[i] != s[n - i - 1]) return false;
    return isPalindrome(s, i + 1);
}

int main() {
    string s;
    cin >> s;

    if (isPalindrome(s, 0)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}
