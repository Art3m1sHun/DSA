#include <iostream>
#define maxn 32000

using namespace std;

void nhap(string arr[], int n){
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

int binarysearch(string arr[], int n, string x, int& count){
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
    string arr[maxn]; int n; string x;
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
    return 0;
}