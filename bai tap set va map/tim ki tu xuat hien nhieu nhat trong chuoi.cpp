#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        string s;
        getline(cin, s);
        map<char, int> mp;

        for (char c : s) {
            if (c == ' ') continue;
            mp[c]++;
        }

        int max_occurrence = 0;
        for (auto it : mp) {
            if (it.second > max_occurrence) {
                max_occurrence = it.second;
            }
        }

        for (auto it : mp) {
            if (it.second == max_occurrence) {
                cout << it.first;
            }
        }
        cout << endl; 
    }
    return 0;
}
