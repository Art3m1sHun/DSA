#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(const vector<int>& arr, int value) {
    auto it = lower_bound(arr.begin(), arr.end(), value);
    if (it != arr.end() && *it == value) {
        return it - arr.begin() + 1;
    }
    return 0;
}

void insertionSort(vector<int>& a) {
    for (int i = 1; i < a.size(); i++) {
        int pos = i - 1, x = a[i];
        while (pos >= 0 && a[pos] > x) {
            a[pos + 1] = a[pos];
            --pos;
        }
        a[pos + 1] = x;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    vector<int> arr;
    while (true) {
        cin >> a >> b;
        if (a == 1) {
            arr.push_back(b);
            insertionSort(arr);
        } else if (a == 2) {
            int pos = binarySearch(arr, b);
            cout << pos << endl;
        }else return false;
    }
    return 0;
}
