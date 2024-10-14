#include <iostream>
#include <string>

using namespace std;

bool doixung(string s, int &count) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) { 
        if (s[i] != s[n - i - 1]) { 
            count++;
        }
    }
    return true; 
}

int main(){
    while(1){
        string s;
        getline(cin, s);
        int count = 0;
        if(doixung(s , count) && count == 1){
            cout << "YES";
        }else cout << " NO";
        cout << endl;
    }
    return 0;
}