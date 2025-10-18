#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

#define ll long long

ll partialAns(vector<int> &t, int n) {
    ll target = t[n - 1];

    ll sum = 0;
    for (int i = n - 2; i >= 0; i--) {
        sum += t[i];
        if (sum > target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> t(n);
    ll sum = 0;
    for (auto &i : t) {
        cin >> i;
        sum += (ll)i;
    }
    sort(t.begin(), t.end());
    cout << max(sum, (ll)2 * t[n - 1]) << '\n';
}
