#include <iostream>
#include <set>
#include <map>
#define maxn 1000 

using namespace std;

int main() {
    int test; cin >> test;
    while(test != 0) {
        int mang1; cin >> mang1;
        int mang2; cin >> mang2;
        int a1[maxn]; int a2[maxn];
        set<int> se1;
        set<int> se2;

        for (int i = 0; i < mang1; i++){
            cin >> a1[i];
            se.insert(a1[i]);
        }
        for (int j = 0; j < mang2; j++){
            cin >> a2[i];
            se.insert(a2[j]);
        }
        int dem = 0;
        for (int i = 0; i < mang1; i++){
            auto it = se.find(a1[i]);
            for(int j = 0; j < mang2; j++){
                if (it != se.end()) {
                    dem++;
                }
            }
        }
        test--;
    }
    return 0;
    system("pause");
}