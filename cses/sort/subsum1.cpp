#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

#define ll long long

int main() {
    int n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;
    vector<ll> prefix(n);
    prefix[0] = a[0];
    int count = (a[0] == x);
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + a[i];
        ll target = prefix[i] - x;
        count +=
            binary_search(prefix.begin(), prefix.begin() + (i - 1), target) ||
            target == 0 || a[i] == x;
    }
    cout << count << '\n';
}
