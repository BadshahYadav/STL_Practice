#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Custom comparator as a struct
struct mycmp {
    bool operator()(pair<int, int> p1, pair<int, int> p2) {
        if (p1.second == p2.second) {
            return p1.first > p2.first; // smaller number first if frequency same
        }
        return p1.second < p2.second; // higher frequency first
    }
};

void findKMostFrequency(int arr[], int n, int k) {
    unordered_map<int, int> m;

    // Frequency map
    for (int i = 0; i < n; i++) {
        m[arr[i]]++;
    }

    // Min heap (by frequency descending)
    priority_queue<pair<int, int>, vector<pair<int, int>>, mycmp> pq(m.begin(), m.end());

    cout << "Top " << k << " most frequent elements: ";
    for (int i = 0; i < k && !pq.empty(); i++) {
        cout << pq.top().first << " ";
        pq.pop();
    }
    cout << endl;
}

int main() {
    int arr[] = {20, 40, 30, 20, 30, 40, 60, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    findKMostFrequency(arr, n, 3);
    return 0;
}
