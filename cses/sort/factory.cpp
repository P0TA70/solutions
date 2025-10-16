#include <climits>
#include <iostream>
#include <vector>

using namespace std;
#define ll long long

bool exceeds(vector<int> &k, int t, ll ans) {
    ll sum = 0;
    for (auto i : k) {
        sum += ans / i;
        if (sum >= t)
            return 1;
    }
    return 0;
}

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> k(n);
    for (auto &i : k)
        cin >> i;

    ll high = LONG_LONG_MAX;
    ll low = 1;
    ll ans = high;
    while (low <= high) {
        ll mid = low + (high - low) / 2;
        if (exceeds(k, t, mid)) {
            ans=mid;
            high=mid-1;
        } else {
            low = mid+1;
        };
    }
    cout << ans << '\n';
}
