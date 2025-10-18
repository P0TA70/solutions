#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    for (auto &i : x) {
        cin >> i;
    }
    stack<pair<int, int>> minPrefix;

    for (int i = 0; i < n; i++) {
        while (!minPrefix.empty() && minPrefix.top().first >= x[i]) {
            minPrefix.pop();
        }
        if (minPrefix.empty()) {
            cout << 0 << ' ';
        } else {
            cout << minPrefix.top().second + 1 << ' ';
        }
        minPrefix.push({x[i], i});
    }
}
