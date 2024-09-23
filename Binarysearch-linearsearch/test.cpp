#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> a(N);
        for (int i = 0; i < N; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        if(N == 2 || N == 3){
            cout << a.back() - a.front() << endl;
        } else if (N < 2){
            cout << 0 << endl;
        }else{
        cout << a.back() - a.front() + a.begin() + 1 - a.begin() + (N)  << endl; 
        }
    };
        
    return 0;
    }