#include <iostream>
#include <map>
#include <set>
#include <vector>
#define maxn 1000
using namespace std;

int main() {
    int test; cin >> test;
    while (test != 0){
        int n; cin >> n;
        int a[maxn];
        set<int> se;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            se.insert(a[i]);
        }
    int test1; cin >> test1;
   while(test1 != 0){
    int kiemtra; cin >> kiemtra;
    auto it = se.find(kiemtra);
    if( it == se.end()){
        cout << "NO" << endl;}
    else cout << "YES" << endl;
        }
        test--;
   }  
 }
