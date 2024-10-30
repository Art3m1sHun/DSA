#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool canFormPalindrome(const string &s) {
    unordered_map<char, int> charCount;
    
    // Count occurrences of each character
    for (char c : s) {
        charCount[c]++;
    }
    
    // Count characters with odd occurrences
    int oddCount = 0;
    for (const auto &entry : charCount) {
        if (entry.second % 2 != 0) {
            oddCount++;
        }
    }
    
    // A string can form a palindrome if at most one character has an odd count
    return oddCount <= 1;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();  // To ignore the newline after the number of test cases
    
    while (t--) {
        string s;
        getline(cin, s);
        
        // Output "YES" if the string can form a palindrome, otherwise "NO"
        if (canFormPalindrome(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
