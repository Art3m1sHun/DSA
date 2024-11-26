#include <iostream>
#include <list>
#include <unordered_map>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    list<int> arr;
    unordered_map<int, list<int>::iterator> position;
    for (int i = 1; i <= n; i++) {
        arr.push_back(i);
        position[i] = --arr.end(); 
    }

    for (int j = 0; j < m; j++) {
        int a;
        cin >> a;

        if (position.find(a) != position.end()) {

            auto it = position[a];

            arr.erase(it);
            position.erase(a);

            arr.push_front(a);

            position[a] = arr.begin(); 
        }
    }
    auto it = arr.end();
    cout << *it;
    cout << endl;

    return 0;
}