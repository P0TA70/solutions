#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
#define ll long long

int main() {
    ll n;
    ll x;
    cin >> n >> x;
    vector<pair<ll, ll>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    ll l = 0;
    ll h = n - 1;
    bool found = 0;
    ll ans[4];
    while (l < h - 2) {
        ll l1 = l + 1;
        ll h1 = h - 1;
        while (l1 < h1) {
            if (a[l].first + a[l1].first + a[h1].first + a[h].first > x) {
                if (h1 - 1 != l1)
                    h1--;
                else {
                    h--;
                    break;
                }
            } else if (a[l].first + a[l1].first + a[h1].first + a[h].first <
                       x) {
                if (l1 + 1 != h1)
                    l1++;
                else {
                    l++;
                    break;
                }
            } else {
                found = 1;
                ans[0] = l;
                ans[1] = l1;
                ans[2] = h1;
                ans[3] = h;
                break;
            }
        }
        if (found)
            break;
    }
    if (found) {
        cout << a[ans[0]].second << ' ' << a[ans[1]].second << ' '
             << a[ans[2]].second << ' ' << a[ans[3]].second << '\n';
    } else
        cout << "IMPOSSIBLE\n";
}
