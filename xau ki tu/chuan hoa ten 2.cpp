#include <iostream>
#include <string>
#include <sstream>

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

