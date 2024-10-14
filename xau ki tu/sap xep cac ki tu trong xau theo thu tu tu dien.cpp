#include <iostream>
#include <string>
#include <sstream>
#include <set>

using namespace std;

int main(){
    while(1){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    set <string> se;
    while (ss >> word){
        se.insert(word);
        }
    for (auto i : se){
        cout << i << " ";
        }
    }
    return 0;
}