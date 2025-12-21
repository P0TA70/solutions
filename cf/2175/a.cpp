#include <climits>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        set<int> a_set;
        for (auto &i : a) {
            cin >> i;
            a_set.insert(i);
        }
        int count = a_set.size();
        int min = INT_MAX;
        for (auto i : a) {
            if (i >= count && i < min)
                min = i;
        }
        cout << min << '\n';
    }
}
