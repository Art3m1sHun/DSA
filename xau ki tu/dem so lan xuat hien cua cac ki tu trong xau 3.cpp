#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main() {
    while (1){
        string s;
        getline(cin, s);
        map <char, int> mp;
        set <char> se;
        for (char c : s){
            mp[c]++;
        }
        int max = 0;
        for (auto it : mp){
            if (it.second > max){
                max = it.second;
            }
        }
        for (auto j : mp){
            if (j.second == max){
                se.insert(j.first);
            }
        }
        cout << *se.rbegin() << endl;
    }
    return 0;
}