#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <set>  // Thư viện cho set

using namespace std;

int main() {
    while(1){
    string s;
    getline(cin, s);  // Đọc câu nhập vào
    stringstream ss(s);
    string word;
    vector<string> words;
    set<string> uniqueWords;  // Dùng để lưu các từ đã xuất hiện

    // Đọc từng từ
    while (ss >> word) {
        // Nếu từ chưa có trong set, thêm vào danh sách và set
        if (uniqueWords.find(word) == uniqueWords.end()) {
            words.push_back(word);
            uniqueWords.insert(word);
        }
    }

    // In ra các từ theo thứ tự xuất hiện
    for (int i = 0; i < words.size(); i++) {
        cout << words[i];
        if (i != words.size() - 1) {
            cout << " ";  // In khoảng trắng giữa các từ
        }
    }
    cout << endl;
    }
    return 0;
}
