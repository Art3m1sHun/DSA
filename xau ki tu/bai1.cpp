#include <iostream>
#include <string>
#define maxn 10000
using namespace std;

bool is_lower(char c){
    if ('a' <= c && c <= 'z') return true;
    else return false;
}

bool is_upper(char c){
    if ('A' <= c && c<= 'Z') return true;
    else return false;
}

bool is_alpha(char c){
    if ('A' <= c && c <= 'z') return true;
    else return false;
}

bool is_digit(char c){
    if(is_alpha(c) || ('1' <= c && c <= '0')) return true;
    else return false;
}

char to_lower(char c){
    if (is_lower(c)) return c;
    if (is_upper(c)) return c + 32;
}

char to_upper(char c){
    if(is_upper) return c;
    if(is_lower) return c - 32;
}

int strlen(char c[]){
    auto length = 0;
    for (int i = 0; c[i] != '\0'; i++ ){
        length++;
    }
    return length;
}

char* strlwr(char c[]){
    for(int i = 0; c[i] != '\0'; i++){
        c[i] = to_lower(c[i]);
    }
    return c;
}

char* strupr(char c[]){
    for (int i = 0; c[i] != '\0'; i++){
        c[i] = to_upper(c[i]);
    }
    return c;
}

int strcmp(char a[], char b[]){
    for (int i = 0; a[i] != '\0' && b[i] != 0; i++){
        if (a[i] < b[i]) return -1;
        if (a[i] == b[i]) return 0;
        if (a[i] > b[i]) return 1;
        exit;
    }
}

char* strrev(char c[]) {
    int length = strlen(c);
    int left = 0;
    int right = length - 1;

    while (left < right) {
        char temp = c[left];
        c[left] = c[right];
        c[right] = temp;
        left++;
        right--;
    }

    return c;
}

