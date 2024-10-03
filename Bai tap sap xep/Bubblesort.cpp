#include <iostream>

using namespace std;

void bubblesort(int arr[], int n){
    for (auto i = 0; i < n; i++){
        for (auto j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j+1]);
                for (int a = 0; a < n; a++){
                    cout << arr[a] << " ";
                }
                cout << endl;
            }
        }
    }
}
int main(){
    int n; cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bubblesort(arr, n);
    return 0;
}