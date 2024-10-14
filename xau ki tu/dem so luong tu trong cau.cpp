#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    while(1){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        int cnt = 0;
        while (ss >> word) cnt++;
        cout << cnt;
        cout << endl;
    }
    return 0;
}