#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    for (auto &i : a)
      cin >> i;

    sort(a, a + n);
    if (a[0] != 0)
      cout << 0 << '\n';
    else {
      bool found = 0;
      int ans;
      for (int i = 1; i < n; i++) {
        if (a[i] >= a[i - 1] + 2) {
          found = 1;
          ans = a[i - 1] + 1;
          break;
        }
      }
      if (found)
        cout << ans << '\n';
      else
        cout << a[n - 1] + 1 << '\n';
    }
  }
}
