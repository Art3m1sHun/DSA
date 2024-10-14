#include <iostream>
#include <map>
#include <set>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int T; cin >> T;
    cin.ignore();

    while (T--){
        string s;
        getline(cin , s);
        stringstream ss (s);
        string word;
        multiset <string> word_set;
        bool found = false;

       while (ss >> word) {
            if (word_set.find(word) != word_set.end()) {
                cout << word << endl;
                found = true;
                break;
            }
            word_set.insert(word);
        }
    }
}