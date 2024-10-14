#include <iostream>
#include <map>

#define maxn 10000

using namespace std;

void nhap(int arr[], int n){
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

bool linearsearch(int a[], int n, int x){
    for (int i = 0; i < n; i++ ){
        if (x == a[i]) return true;
    }
    return false;
}

int main() {
    int arr[maxn];
    int n; cin >> n;
    nhap(arr, n);
    int x; cin >> x;
    int dem1 = 0;
    map<int, int> ma;

    if (linearsearch(arr, n, x)) {
        for (int j = 0; j < n; j++) {
            if (arr[j] == x) {
                dem1++;
                ma[j] = j + 1;
            }
        }
    }

    cout << dem1 << endl;
    for (auto it : ma){
        cout << it.first << " " << it.second << endl;
    }
}