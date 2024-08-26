#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int test;
    cin >> test;

    while (test--) {
        int n;
        cin >> n;

        vector<int> a(n);

        multiset<int> se;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            se.insert(a[i]);
        }

        int maxCount = 0;
        int maxElement = a[0];

        for (auto num : a) {
            int count = se.count(num);
            if (count > maxCount) {
                maxCount = count;
                maxElement = num;
            }

            // Check for num + 1
            auto it = se.find(num + 1);
            if (it != se.end() && se.count(*it) > maxCount) {
                maxCount = se.count(*it);
                maxElement = *it;
            }
        }

        cout << maxCount << " " << maxElement << endl;
    }

    return 0;
}