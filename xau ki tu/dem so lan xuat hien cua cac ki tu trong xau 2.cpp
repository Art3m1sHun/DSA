#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    while(1){
    string s;
    getline (cin, s);
    map <char, int> mp;
    for (char c : s){
        mp[c]++;
    }
    for (auto i : mp){
        cout << i.first << " " << i.second << endl;
    }
    }
    return 0;
}
