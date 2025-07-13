#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    bool yes = 0;
    bool needed;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (i > 0 && (yes == 0 || needed == 1)) { // if 1 0 not already found
        if (abs(a[i] - a[i - 1]) <= 1) {
          yes = 1;
          needed = 0;
        }
      }
      if (i > 1 && yes == 0) {
        if ((a[i - 2] >= min(a[i], a[i - 1]) &&
             a[i - 2] <= max(a[i], a[i - 1])) ||
            (a[i] >= min(a[i - 1], a[i - 2]) &&
             a[i] <= max(a[i - 1], a[i - 2]))) {
          yes = 1;
          needed = 1;
        }
      }
    }

    if (yes == 1) {
      cout << needed << '\n';
    } else {
      cout << -1 << '\n';
    }
  }
}
