#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main(){
    while(1){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        vector<string> results;

        while (ss >> word){
            results.push_back(word);
        }

        int n = results.size();
        bool found = false;  

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (results[i] == results[j]) {
                    cout << results[i] << endl;
                    found = true;
                    break;
                }
            }
            if (found) break; 
        }

        if (!found) {
            cout << -1 << endl;
        }
    }
    return 0;
}
