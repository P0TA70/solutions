#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    set<pair<int, int>> prefix;
    prefix.insert({a[0], 0});
    prefix.insert({a[1], 1});

    bool found = 0;

    for (int i = 2; i < n; i++) {
        auto itl = prefix.begin();
        auto itr = prev(prefix.end());
        int target = x - a[i];

        while (itl != itr) {
            if (itl->first + itr->first > target) {
                itr = prev(itr);
            } else if (itl->first + itr->first < target) {
                itl = next(itl);
            } else {
                cout << itl->second + 1 << ' ' << itr->second + 1 << ' '
                     << i + 1 << '\n';
                found = 1;
                break;
            }
        }
        if (found)
            break;
        prefix.insert({a[i], i});
    }
    if (!found)
        cout << "IMPOSSIBLE" << '\n';
}
