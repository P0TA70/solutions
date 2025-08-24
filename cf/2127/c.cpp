#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

#define ll long long

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a(n);
    for (auto &i : a) {
      cin >> i.first;
    }
    ll sum = 0;
    for (auto &i : a) {
      cin >> i.second;
      sum += abs(i.second - i.first);
    }
    sort(a.begin(), a.end());
    set<int> c;
    for (int i = 1; i < n; i++) {
      int b[4] = {a[i - 1].first, a[i - 1].second, a[i].first, a[i].second};
      sort(b, b + 4);
      c.insert(2 * (b[2] - b[1]));
      if (abs(a[i].first - a[i].second) +
              abs(a[i - 1].first - a[i - 1].second) ==
          b[3] + b[2] - b[1] - b[0]) {
        c.insert(0);
      }
    }
    cout << sum + *c.begin() << '\n';
  }
}
