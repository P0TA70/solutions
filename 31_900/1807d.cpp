#include <iostream>

using namespace std;

#define ll long long

void ans(bool b) {
  if (b) {
    cout << "yes\n";
  } else {
    cout << "no\n";
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, q;
    cin >> n >> q;
    int a[n];
    ll prefix[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      prefix[i] = a[i] + (i == 0 ? 0 : prefix[i - 1]);
    }

    while (q--) {
      ll l, r, k;
      cin >> l >> r >> k;
      ll sum_before_range = (l > 1 ? prefix[l - 2] : 0);
      ll sum_after_range = prefix[n - 1] - prefix[r - 1];
      ll total = sum_after_range + sum_before_range + (r - l + 1) * k;
      if (total % 2) {
        ans(1);
      } else {
        ans(0);
      }
    }
  }
}
