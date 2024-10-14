#include <iostream>
#include <set>
#include <string>
#include <map>
#include <sstream>

using namespace std;

int main(){
    int T; 
    cin >> T;
    cin.ignore();  // Bỏ qua ký tự newline sau khi nhập T

    while(T--) {
        string s;
        getline(cin, s);  
        set <string> se;
        stringstream ss(s); 
        string word;

        // Tách từng từ và đếm
        while(ss >> word) {
            se.insert(word);
        }
    cout << se.size() << endl;
    }

    return 0;
}
