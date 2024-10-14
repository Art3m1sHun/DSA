#include <iostream>
#include <string>
#include <set>

using namespace std;

char tolower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + 'a' - 'A';
    }
    return ch;
}

int main(){
    while(1){
    string s;
    getline(cin, s);
    set <char> se;
    for(char c : s){
        c = tolower(c);
        se.insert(c);
    }
     if (se.size() == 26) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}