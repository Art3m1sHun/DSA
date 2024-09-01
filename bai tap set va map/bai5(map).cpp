#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int test; cin >> test;
    string s;
    map <string, int > a;
    while (test--){
    while (cin >> s){
        a[s]++;
        }
    auto soluong = a.size();
    auto max = 0;
    for (auto i = a.begin(); i != a.end(); i++){
        if(a[i] < a[i + 1]) max = a[i + 1];
        else max = a[i];
        }
        cout << max;
        cout << endl;
    }
    return 0;
}