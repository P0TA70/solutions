#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, n;
    cin >> a >> b >> n;
    int x[n];
    for (auto &i : x) {
      cin >> i;
    }
    sort(x, x + n);
    long long cost = b;
    for (auto i : x) {
      if (i < a) {
        cost += i;
      } else {
        cost += a - 1;
      }
    }
    cout << cost << '\n';
  }
}
