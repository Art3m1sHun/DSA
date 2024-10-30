#include <iostream>
#include <vector>

using namespace std;

struct Point {
    int x, y;
};

bool comparePoints(const Point& a, const Point& b) {
    if (a.x != b.x) {
        return a.x < b.x;
    } else {
        return a.y > b.y;
    }
}

int partition(vector<Point>& points, int low, int high) {
    // Choose a pivot element (e.g., the median of the first, middle, and last elements)
    int pivotIndex = (low + high) / 2;
    swap(points[pivotIndex], points[high]);

    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (comparePoints(points[j], points[high])) {
            i++;
            swap(points[i], points[j]);
        }
    }

    swap(points[i + 1], points[high]);
    return i + 1;
}

void quickSort(vector<Point>& points, int low, int high) {
    if (low < high) {
        int pi = partition(points, low, high);
        quickSort(points, low, pi - 1);
        quickSort(points, pi + 1, high);
    }
}

int main() {
    int n;
    cin >> n;

    vector<Point> points(n);
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        points[i] = {x, y};
    }

    quickSort(points, 0, points.size() - 1);

    for (const Point& p : points) {
        cout << p.x << " " << p.y << '\n';
    }

    return 0;
}