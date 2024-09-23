#include <iostream>
#include <climits> 
using namespace std;
#define maxn 10000

void nhap(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void trongso(int arr[], int n) {
     if (n < 2) {
        cout << 0 << endl;
        return;
    }

    int max1 = arr[0];
    int min1 = arr[0];
    int max2 = INT_MIN;
    int min2 = INT_MAX;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }

        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }
    if (n == 2){
        cout << max1 - min1 << endl;
    }else 
    cout << (max1 - min1) + (max2 - min2) << endl;
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        int arr[maxn];
        int n;
        cin >> n;
        nhap(arr, n);
        trongso(arr, n);
    }
    return 0;
}