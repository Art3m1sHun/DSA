#include <iostream>
#include <string>

using namespace std;

bool is_digitso(char c) {
    if (c >= '0' && c <= '9')
        return true;
    else
        return false;
}

bool is_digitchu(char c) {
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        return true;
    else
        return false;
}

int main() {
    while (1) {
        string s;
        getline(cin, s);
        int so = 0;
        int chu = 0;
        int dacbiet = 0;
        auto length = s.length();
        for (int i = 0; i < length; i++) {
            if (is_digitso(s[i])) so++;
            if (is_digitchu(s[i])) chu++;
            if ((is_digitchu(s[i]) == false) && (is_digitso(s[i]) == false))dacbiet++;
        }
        for (int i = 0; i < length; i++) {
            cout << s[i];
        }
        cout << endl;
        cout << chu << " " << so << " " << dacbiet << endl;
    }
    return 0;
}