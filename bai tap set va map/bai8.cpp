#include <iostream>
#include <map>
#include <set>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int T; cin >> T;
    cin.ignore();

    while(T--){
        string s;
        getline(cin, s);
        map <string, int> mp;
        stringstream ss(s);
        string word;
        while (ss >> word){
            mp[word]++;
        }
        int max = 0;
        for (auto it : mp){
            if (it.second > max)
            max = it.second;
        }
        set <string> se;
        int cnt = 0;
        for(auto x : mp){
            if (x.second == max){
                cnt++;
                se.insert(x.first);
            }
        }
         if (!se.empty()) {
            cout << *se.begin() << endl; 
        cout << endl;
        }
    }
    return 0;

}