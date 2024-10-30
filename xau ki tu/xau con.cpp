#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    
    // Input: Read two strings
    getline(cin, a);
    getline(cin, b);
    
    // Check if string 'a' is a substring of string 'b'
    if (b.find(a) != string::npos) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
