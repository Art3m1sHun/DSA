#include <iostream>
#define maxn 10000
#include <math.h>

using namespace std;

void nhap(int arr[], int n){
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

int trongso(int arr[], int n){
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < n; i++){
        if (arr[i] < min){
            min = arr[i];
        }else if (arr[i] > max){
            max = arr[i];
        }
    }
    if(n <= 3) {
        return max - min;
    }else{
    int semin = min;
    int semax = max;
    for (int i = 0; i < n; i++){
        if (arr[i] != min && arr[i] < semin){
            semin = arr[i];
        }else if (arr[i] != max && arr[i] > semax){
            semax = arr[i];
        }
    }
    return (max - min) + (semax - semin);
    }
}


int main(){
    int test; cin >> test;
    while (test--){
        int arr[maxn];
        int n; cin >> n;
        int min, max, semin, semax;
        nhap(arr, n);
        cout << trongso(arr,n) << endl;
        }
    return 0;
}