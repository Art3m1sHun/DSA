#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
    int T; cin >> T;
    cin.ignore();
    while(T--){
        string s;
        getline(cin, s);
        set<char> se;
        for(char c : s){
            if (c == ' ') continue;
            se.insert(tolower(c));
        }
    if(se.size() == 26) cout << "YES" << endl;
    else cout << "NO" << endl;
    for (auto x : se){
        cout << x << " ";
    }
    cout << se.size();

    }
}