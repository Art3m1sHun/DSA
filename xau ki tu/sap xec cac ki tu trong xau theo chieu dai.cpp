#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

bool compare(const string &a, const string &b) {
    // Nếu độ dài khác nhau thì sắp xếp theo độ dài
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }
    // Nếu độ dài bằng nhau thì sắp xếp theo từ điển
    return a < b;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Bỏ qua ký tự newline sau số T
    
    while (T--) {
        string input;
        getline(std::cin, input);
        
        stringstream ss(input);
        string word;
        vector<string> words;
        
        // Tách từ và đưa vào vector
        while (ss >> word) {
            words.push_back(word);
        }
        
        // Sắp xếp từ theo chiều dài và từ điển
        sort(words.begin(), words.end(), compare);
        
        // In kết quả
        for (const auto& w : words) {
            cout << w << " ";
        }
        cout << endl;
    }
    
    return 0;
}
