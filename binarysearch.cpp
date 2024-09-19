#include <iostream>
#define maxn 32000

using namespace std;

void nhap(int arr[], int n){
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

int binarysearch(int arr[], int n, int x, int& count){
    int left = 0, right = n - 1;
    while(left <= right){
        count++;
        int mid = (left + right) / 2;
        if (arr[mid] == x){
            return mid;
        }
        else if(arr[mid] < x){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
    while(1){
    int arr[maxn], n, x;
    cin >> n;
    nhap(arr,n);
    cin >> x;

    int count = 0;
    int pos = binarysearch(arr, n, x, count);

    if (pos != -1){
        cout << pos << endl;
        cout << count << endl;
    } else {
        cout << -1 << endl;
    }
    }
    return 0;
}