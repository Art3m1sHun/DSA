#include <iostream>
#include <vector>
using namespace std;
int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector<int> cnt(n + 1);
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
        }
        int solo = 0, duo = 0;
        for (int i = 1; i <= n; i++) {
            if (cnt[i] == 1) {
                solo++;
            } else if (cnt[i] > 1) {
                duo++;
            }
        }
        if (solo + 2 * duo >= 2 * k && solo + duo <= 2 * k) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}