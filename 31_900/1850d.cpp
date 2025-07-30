#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;

    int a[n];
    for (auto &i : a) {
      cin >> i;
    }
    sort(a, a + n);

    int m = 0;
    int start = 0;

    for (int i = 1; i < n; i++) {
      if (a[i] - a[i - 1] > k) {
        m = max(m, i - start);
        start = i;
      }
    }
    m = max(m, n - start);
    cout << n - m << '\n';
  }
}
