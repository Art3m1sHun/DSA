#include <iostream>
#include <sstream>
#include <string>
#include <set>

using namespace std;

bool is_upper(string c){
    int flag = 0;
    for (auto x : c){
    if ('A' <= x && x<= 'Z') flag++;
    }
    if (flag == c.length()) return true;
    else return false;
}

int main(){
    while(1){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        while(ss >> word){
                if(is_upper(word)) cout << word << endl;
        }
    }
    return 0;
}