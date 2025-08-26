#include <algorithm>
#include <iostream>

using namespace std;

#define ll long long

const long long MOD = 1e9 + 7;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int g[n];
    for (int i = 0; i < n; i++) {
      cin >> g[i];
    }
    sort(g, g + n);
    ll ans = 0;
    for (int i = n - 1; i >= 0; i -= 2) {
      ans += g[i];
    }
    cout << ans << '\n';
  }
}
