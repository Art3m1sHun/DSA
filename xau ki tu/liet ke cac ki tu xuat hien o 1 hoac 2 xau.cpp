#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    while(1){
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        set <char> se;
        for (char ch : s1) se.insert(ch);
        for (char ch1 : s2) se.insert(ch1);
        for (auto x : se) cout << x;
        cout << endl;
    }
    return 0;
}
