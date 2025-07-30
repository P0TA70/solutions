#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    int m = INT_MAX;
    int M = 0;
    for (auto &i : a) {
      cin >> i;
      m = min(i, m);
      M = max(i, M);
    }

    int ans;
    if (a[n - 1] - m > M - a[0]) {
      ans = a[n - 1] - m;
    } else {
      ans = M - a[0];
    }

    int temp = 0;

    for (int i = 1; i < n; i++) {
      temp = max(temp, a[i - 1] - a[i]);
    }

    cout << max(temp, ans) << endl;
  }
}
