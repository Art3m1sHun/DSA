#include <iostream>
#include <vector>

using namespace std;

void print_array(vector<int>& arr, int left, int right) {
    for (int i = 0; i < arr.size(); i++) {
        if (i == left) {
            cout << "[ ";
        }
        cout << arr[i] << " ";
        if (i == right) {
            cout << "] ";
        }
    }
    cout << endl;
}

void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> left_sub(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> right_sub(arr.begin() + mid + 1, arr.begin() + right + 1);
    int i = 0;
    int j = 0;
    int k = left;
    while (i < left_sub.size() && j < right_sub.size()) {
        if (left_sub[i] <= right_sub[j]) {
            arr[k] = left_sub[i];
            i++;
        } else {
            arr[k] = right_sub[j];
            j++;
        }
        k++;
    }
    while (i < left_sub.size()) {
        arr[k] = left_sub[i];
        i++;
        k++;
    }
    while (j < right_sub.size()) {
        arr[k] = right_sub[j];
        j++;
        k++;
    }
    print_array(arr, left, right);
}


void merge_sort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}


int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    merge_sort(A, 0, N - 1);
    return 0;
}