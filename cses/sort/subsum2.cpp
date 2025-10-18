#include <iostream>
#include <map>
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
    map<ll, ll> prefixSet = {{a[0],1}};
    prefix[0] = a[0];
    ll count = (a[0] == x);
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + a[i];

        ll target = prefix[i] - x;
        count += (target == 0);
        count += prefixSet[target];
        prefixSet[prefix[i]]++;
    }
    cout << count << '\n';
}
