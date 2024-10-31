#include <iostream>
#include <string>
#include <algorithm>
#define maxn 50000

using namespace std;

int flag(string s1, string s2) {
    if (s1.length() < s2.length()) {
        return -1;
    } else if (s1.length() == s2.length()) {
        if (s1 == s2) {
            return 0;
        } else if (s1 < s2) {
            return -1;
        } else {
            return 1;
        }
    } else {
        return 1;
    }
}

int partition(string arr[], int left, int right) {
    string pivot = arr[left];
    int i = left - 1, j = right + 1;
    while (true) {
        do {
            ++i;
        } while (flag(arr[i], pivot) == -1);
        
        do {
            --j;
        } while (flag(arr[j], pivot) == 1);
        
        if (i < j) {
            swap(arr[i], arr[j]);
        } else {
            return j;
        }
    }
}

void quick(string arr[], int left, int right) {
    if (left >= right) return;
    int pivotIndex = partition(arr, left, right);
    quick(arr, left, pivotIndex);
    quick(arr, pivotIndex + 1, right);
}

int countUnique(string arr[], int n) {
    if (n == 0) return 0;
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            count++;
        }
    }
    return count;
}

void inputArray(string arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int main() {
    string arr[maxn];
    int n;
    
    cin >> n;
    inputArray(arr, n);
    quick(arr, 0, n - 1);
    int uniqueCount = countUnique(arr, n);
    cout << uniqueCount << endl;
    
    return 0;
}
