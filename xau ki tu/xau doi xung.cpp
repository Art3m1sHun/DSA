#include <iostream>
#include <string>

using namespace std;

bool doixung(string s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) { 
        if (s[i] != s[n - i - 1]) { 
            return false; 
        }
    }
    return true; 
}

int main(){
    while(1){
        string s;
        getline(cin, s);
        if(doixung(s)){
            cout << "YES";
        }else cout << " NO";
        cout << endl;
    }
    return 0;
}