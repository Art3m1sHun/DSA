#include <iostream>
#include <string>
#include <set>
#include <sstream>
#include <algorithm> 

using namespace std;

int main() {
    while(1){
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        stringstream ss(s1);
        string word;
        set<string> resultSet;

        while(ss >> word){
            if(s2.find(word) == string::npos){
                resultSet.insert(word);
            }
        }

        for (const string& ch : resultSet) {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}
