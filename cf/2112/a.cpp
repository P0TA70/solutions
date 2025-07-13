#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, x, y;
    cin >> a >> x >> y;

    int l1 = x - abs(a - x);
    int u1 = x + abs(a - x);

    int l2 = y - abs(a - y);
    int u2 = y + abs(a - y);

    bool ans = 1;
    if (u1 <= l2 || u2 <= l1) {
      ans = 0;
    }

    if (ans) {
      cout << "yes" << '\n';
    } else {
      cout << "no" << '\n';
    }
  }
}
