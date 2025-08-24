#include <algorithm>
#include <climits>
#include <iostream>

using namespace std;

#define ll long long

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int a[n];
    int max_mod = 0;
    bool zero = 0;
    bool even = 0;
    bool even_two = 0;
    for (auto &i : a) {
      cin >> i;
      max_mod = max(max_mod, i % k);
      if (i % k == 0)
        zero = 1;
      if (k == 4) {
        if (i % 2 == 0) {
          if (even) {
            even_two = 1;
          } else {
            even = 1;
          }
        }
      }
    }
    if (zero == 1) {
      cout << 0 << '\n';
    } else {
      int l = INT_MAX;
      if (k == 4) {
        if (even_two)
          l = 0;
        else if (even)
          l = 1;
        else
          l = 2;
      }
      cout << min((k - max_mod), l) << '\n';
    }
  }
}
