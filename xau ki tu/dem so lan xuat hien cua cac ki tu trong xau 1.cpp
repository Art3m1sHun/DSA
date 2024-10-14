#include <iostream>
#include <string>
#include <map>
#define maxn 1000

using namespace std;

int main() {
    while(1){
    string s;
    getline(cin, s);
    map<char, int> a;
    for (int i = 0; i < s.length(); i++){
        a.insert({s[i], 0});
        }
    for (int j = 0; j < s.length(); j++){
        auto it = a.find(s[j]);
        if( it != a.end()){
            (*it).second++;
        }
    }
    for (auto it : a){
        auto key = it.first;
        cout << key << " " << a[key] << endl;
        }
    }
}

