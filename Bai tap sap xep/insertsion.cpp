#include <iostream>
using namespace std;

void insertsionsort(int a[], int n){
    for (auto i = 1; i < n; i++){
        int pos = i - 1, x = a[i];
        while(pos >= 0 && a[pos] > x){
            a[pos + 1] = a[pos];
            --pos;
             for (int j = 0; j < n; j++){
            cout << a[j] << " ";
        }
        }
        a[pos + 1] = x;
        for (int j = 0; j < n; j++){
            cout << a[j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n; cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    insertsionsort(arr , n);
    return 0;
}
