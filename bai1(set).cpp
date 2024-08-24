#include <iostream>
#include <vector>
#include <set>
#include <map>
#define maxn 1000
using namespace std;

int main () {
    int test; cin >> test;
    while (test != 0){
        int n; cin >> n;
        int a[maxn];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
    set<int> se;
    for (int j = 0; j < n; j++){
        se.insert(a[j]);
        }
    cout << se.size() << endl;
    test--;
    cout << endl;
    }
 return 0;
 system("pause");
}