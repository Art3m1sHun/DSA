#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

char toupper(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch + 'A' - 'a';  
    }
    return ch;
}


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
    word[0] = toupper(word[0]);
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
        cout << words.back();  // In tên cuối cùng
        words.pop_back();  // Xóa tên cuối cùng khỏi danh sách

        if (!words.empty()) {
            cout << ", ";  // Thêm dấu phẩy ngăn cách
            for (int i = 0; i < words.size(); i++) {
                cout << words[i];  // In các từ còn lại
                if (i != words.size() - 1) {
                    cout << " ";  // Thêm khoảng trắng giữa các từ
                }
            }
        }
        cout << endl;  
    }
}
    return 0;
}