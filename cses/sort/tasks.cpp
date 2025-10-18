#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n), d(n);
    ll deadSum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> d[i];
        deadSum += d[i];
    }
    sort(a.begin(), a.end());
    ll permSum = 0;
    for (ll i = 0; i < n; i++) {
        permSum += (n - i) * a[i];
    }
    cout << deadSum-permSum << '\n';
}
