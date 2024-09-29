#include <iostream>
#include <string>
#include <set>
#include <algorithm>  // For sorting

using namespace std;

int main() {
    while(1){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    
    set<char> resultSet;
    for (char ch : s1) {
        if (s2.find(ch) == string::npos) {
            resultSet.insert(ch);
        }
    }

    for (char ch : resultSet) {
        cout << ch;
    }
    
    cout << endl;
    }
    return 0;
}
