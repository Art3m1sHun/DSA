#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#define gmail "@gmail.com"

using namespace std;

char tolower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + 'a' - 'A';
    }
    return ch;
}

void chuanhoa(string &word){
    for (int i = 0; i < word.length(); i++){
        word[i] = tolower(word[i]);
    }
}

char laychucaidau(string word){
    return word[0];
}

int main(){
    while(1){
    string s;
    getline(cin, s);
    stringstream ss (s);
    string word;
    vector<string> words;
    while(ss >> word){
        chuanhoa(word);
        words.push_back(word); // Thêm vào danh sách từ
    }
    if (!words.empty()) {
        if (!words.empty()) {
            for (int i = 0; i < words.size() - 1; i++) {
                cout << laychucaidau(words[i]);  // In các từ còn lại
                }
                cout << words.back();  // In tên cuối cùng
                cout << gmail;
            }
        }
        cout << endl;  
    }
    return 0;
}