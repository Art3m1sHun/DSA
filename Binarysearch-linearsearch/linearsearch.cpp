#include <iostream>
#define maxn 10000
using namespace std;

bool linearsearch(int a[], int n, int x){
    for (int i = 0; i < n; i++ ){
        if (x == a[i]) return true;
    }
    return false;
}
void nhap(int arr[], int n){
    for (auto i = 0; i < n; i++){
        cin >> arr[i];
    }
}
int main(){
    int n; cin >> n;
    int arr[maxn];
    nhap(arr , n);
    int dem = 0;
    int x; cin >> x;
     if (linearsearch(arr, n, x)) {
        for (int j = 0; j < n; j++) {
            dem++;
            if (arr[j] == x) {
                cout << j << endl;
                cout << dem << endl;
                cout << n - j - 1 << endl;
                cout << n - j << endl;
                return 0;
            }
        }
    } else {
        cout << -1;
        }
    return 0;
    }
