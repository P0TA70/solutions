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
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    if (n == 2) {
      if (a[0] <= a[1]) {
        cout << 2 * a[0] << '\n';
      } else {
        cout << a[0] + a[1] << '\n';
      }
    } else {
      cout << min({a[0] + a[1], a[0] + a[2] + min(a[0] + a[2], a[1]),
                   a[0] + min(a[0], a[1] + a[2])})
           << '\n';
    }
  }
}
