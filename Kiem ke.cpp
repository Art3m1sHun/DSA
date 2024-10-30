#include <iostream>
#define maxn 50000

using namespace std;

int partition(int arr[], int left, int right) {
    int pivot = arr[left];
    int i = left - 1, j = right + 1;
    while (true) {
        do {
            ++i;
        } while (arr[i] < pivot);
        do {
            --j;
        } while (arr[j] > pivot);
        if (i < j) {
            swap(arr[i], arr[j]);
        } else {
            return j;
        }
    }
}

void quick(int arr[], int left, int right) {
    if (left >= right) return;
    int pivotIndex = partition(arr, left, right);
    quick(arr, left, pivotIndex); 
    quick(arr, pivotIndex + 1, right);
}

int countUnique(int arr[], int n) {
    if (n == 0) return 0;
    int count = 1; 
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            count++;
        }
    }
    return count;
}

void inputArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int main() {
    int arr[maxn], n;
    while (true) {
        cin >> n;
        inputArray(arr, n);
        quick(arr, 0, n - 1);
        int uniqueCount = countUnique(arr, n);
        cout << uniqueCount << endl;
        cout << endl;
    }
    return 0;
}
