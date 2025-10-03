#include <iostream>
#include <set>

using namespace std;

#define ll long long

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    set<int> b;
    for (auto &i : a) {
      cin >> i;
      b.insert(i);
    }
    int ans = 2 * (b.size() - 1);
    if (*b.begin() != 0)
      ans++;
    cout << ans << '\n';
  }
}
