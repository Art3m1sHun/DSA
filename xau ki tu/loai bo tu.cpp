#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <set>

using namespace std;

int main() {
    while(1) {
        string s;
        getline(cin, s);  // Đọc câu nhập vào
        
        string s1;
        getline(cin, s1); // Đọc từ cần xóa
        
        stringstream ss(s);
        string word;
        vector<string> words;

        // Đọc từng từ vào vector
        while (ss >> word) {
            words.push_back(word);
        }

        // Tìm và xóa từ s1
        auto it = find(words.begin(), words.end(), s1);
        if (it != words.end()) {
            words.erase(it);
        }

        // In ra các từ còn lại sau khi xóa
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
