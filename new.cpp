#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> days(N);
    for (int i = 0; i < N; ++i) {
        cin >> days[i];
    }

    int maxDay = days[0];
    for (int i = 1; i < N; ++i) {
        maxDay = max(maxDay, days[i]);
    }

    cout << maxDay << endl;

    return 0;
}