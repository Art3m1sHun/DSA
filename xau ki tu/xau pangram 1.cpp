#include <iostream>
#include <string>
#include <set>


using namespace std;

int main(){
    while (1)
    {
        string s;
        getline(cin, s);
        set <char> se;
        for (char i : s){
            se.insert(i);
        }
        if (se.size() == 26) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
    
}