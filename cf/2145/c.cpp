#include <climits>
#include <iostream>
#include <map>
#include <set>
using namespace std;
#define ll long long

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int na[n], nb[n];
    if (s[0] == 'a') {
      na[0] = 1;
      nb[0] = 0;
    } else {
      na[0] = 0;
      nb[0] = 1;
    }
    for (int i = 1; i < n; i++) {
      if (s[i] == 'a') {
        na[i] = na[i - 1] + 1;
        nb[i] = nb[i - 1];
      } else {
        na[i] = na[i - 1];
        nb[i] = nb[i - 1] + 1;
      }
    }
    int desired = na[n - 1] - nb[n - 1];
    if (desired == 0) {
      cout << 0 << '\n';
      continue;
    }
    multiset<int> d;
    map<int, int> pos;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
      if (na[i] - nb[i] == desired) {
        ans = min(ans, i + 1);
      }
      auto it = d.find(na[i] - nb[i] - desired);
      if (it != d.end()) {
        int ak = pos[*it];
        ans = min(ans, i - ak);
      }
      d.insert(na[i] - nb[i]);
      pos[na[i] - nb[i]] = i;
    }
    if (ans == n)
      ans = -1;
    cout << ans << '\n';
  }
}
