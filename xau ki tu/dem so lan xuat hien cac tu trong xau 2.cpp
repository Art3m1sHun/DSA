#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <vector>

using namespace std;

char tolower(char ch){
    if(ch >= 'A' && ch <='Z'){
        return ch + 'a' - 'A';
    }
    return ch;
}

void chuanhoa(string &word){
    for (int i = 0; i < word.length(); i++){
        word[i] = tolower(word[i]);
    }
}

int main(){
    while(1){
        string s;
        getline(cin,s);
        stringstream ss(s);
        string word;
        vector<string> words;
        map <string, int> mp;
        while(ss >> word){
            chuanhoa(word);
            auto it = mp.find(word);
            if(it == mp.end()){
                mp.insert({word, 1});
            }
            else{
                (*it).second++;
            }
        }
    for (auto x : mp){
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
    }
    return 0;
}