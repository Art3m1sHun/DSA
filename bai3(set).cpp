#include <iostream>
#include <set>
#include <map>
#define maxn 1000 

using namespace std;

int main() {
    cout << "nhap so luong test: "<< endl;
    int test; cin >> test;
    while(test--) {
        int num;
        cout << "nhap mang so luong 1: " << endl;
        int mang1; cin >> mang1;
        cout << "nhap mang so luong 2: " << endl;
        int mang2; cin >> mang2;
        int a1[maxn];
        set<int> se;
        cout << "nhap mang 1: "<<endl;
        for (int i = 0; i < mang1; i++){
            cin >> a1[i];
        }
        cout << "nhap mang 2: "<<endl;
        for (int j = 0; j < mang2; j++){
            cin >> num;
            se.insert(num);
        }
        int dem = 0;
        for (auto i = 0; i < mang1; i++) {
            if (se.find(a1[i]) == se.end()) {
                dem++;
            }
        }

        if (dem == 0) {
            cout << "NOT FOUND" << endl;
        } else {
            cout << dem << endl;
        }
    }

    return 0;
}