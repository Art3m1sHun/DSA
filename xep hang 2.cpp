#include <iostream>
#include <list>
#include <unordered_map>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    list<int> arr;  // Danh sách sinh viên
    unordered_map<int, list<int>::iterator> position;  // Lưu vị trí của từng sinh viên trong danh sách

    // Khởi tạo danh sách và vị trí
    for (int i = 1; i <= n; i++) {
        arr.push_back(i);
        position[i] = --arr.end();
    }

    // Xử lý các lần gọi
    for (int j = 0; j < m; j++) {
        int a;
        cin >> a;

        if (position.find(a) != position.end()) {
            auto it = position[a];

            // Di chuyển phần tử lên đầu
            arr.splice(arr.begin(), arr, it);

            // Cập nhật vị trí mới
            position[a] = arr.begin();
        }

        // In phần tử ở cuối danh sách
        cout << arr.back() << " ";
    }

    cout << endl;
    return 0;
}
