#include<iostream>
#include<string>
#include <set>
using namespace std;

int main(){
    while(1){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    set <char> se;
    for(auto i = 0; i < s1.length(); i++){
        for (auto j = 0; j < s2.length(); j++){
            if(s2[j] == s1[i]) se.insert(s2[j]);
        }
        }
        for (auto x : se) {
            cout << x;
        }
        cout<<endl;
    }
    return 0;
}