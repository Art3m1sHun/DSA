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
    while(ss >> word) cout << word << endl;
    }
    return 0;
}