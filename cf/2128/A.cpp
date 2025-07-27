#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, c;
    cin >> n >> c;
    int a[n];
    for (auto &i : a) {
      cin >> i;
    }
    sort(a, a + n);
    int cost = 0;
    int h = n - 1;
    while (a[h] > c) {
      cost++;
      h--;
    }

    int current_factor = 1;
    while (h > -1) {
      if (a[h] * current_factor <= c) {
        h--;
        current_factor *= 2;
      } else {
        cost++;
        h--;
      }
    }
    if (cost > n) {
      cost = n;
    }
    cout << cost << '\n';
  }
}
