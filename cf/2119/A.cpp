#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long a, b, x, y;
    cin >> a >> b >> x >> y;

    if (b == a) {
      cout << 0 << '\n';
    } else if (b > a) {
      if (x <= y) {
        cout << (b - a) * x << '\n'; // done
      } else {
        if ((a % 2 == 0 && b % 2 == 0) || (a % 2 != 0 && b % 2 != 0)) {
          cout << (b - a) / 2 * (x + y) << '\n'; // done (both odd)
        } else if (a % 2 != 0 && b % 2 == 0) {
          cout << (b - a + 1) / 2 * x + (b - a - 1) / 2 * y << '\n';
        } else if (a % 2 == 0 && b % 2 != 0) {
          cout << (b - a + 1) / 2 * y + (b - a - 1) / 2 * x << '\n';
        }
      }
    } else if (b < a) {
      if (a % 2) {
        if (b == a - 1) {
          cout << y << '\n'; // done
        } else {
          cout << -1 << '\n'; // dpne
        }
      } else {
        cout << -1 << '\n'; // done
      }
    }
  }
}
