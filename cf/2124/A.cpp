#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) {
      cin >> i;
    }
    vector<int> c = a;
    sort(c.begin(), c.end());
    if (c == a) {
      cout << "no" << '\n';
    } else {
      cout << "yes" << '\n';
      vector<int> ans(n);
      int count = 0;
      for (int i = 0; i < n; i++) {
        if (a[i] != c[i]) {
          ans[count] = a[i];
          count++;
        }
      }
      cout << count << '\n';
      for (int i = 0; i < count; i++) {
        cout << ans[i] << ' ';
      }
      cout << '\n';
    }
  }
}
