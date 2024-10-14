#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int x = 0; x < n; x++) {
        cout << arr[x] << " ";
    }
    cout << endl;
}

void selectionsort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int min_pos = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_pos]) {
                min_pos = j;
            }
        }
        if (min_pos != i) {
            swap(arr[min_pos], arr[i]);
            printArray(arr, n);
        }
    }
}

int main() {
    int n; cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    selectionsort(arr, n);
    return 0;
}
