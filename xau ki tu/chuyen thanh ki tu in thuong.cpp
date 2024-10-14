#include <iostream>
#include <string.h>
#define maxn 10000

using namespace std;

char tolower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + 'a' - 'A';
    }
    return ch;
}

int main() {
    while(1){
    string s;
    getline(cin, s);
    auto length = s.length();
    for (int i = 0; i < length; i++) {
        s[i] = tolower(s[i]);
    }
    for (int i = 0; i < length; i++) {
        cout << s[i];
    }
    cout << endl;
    }
    return 0;
}