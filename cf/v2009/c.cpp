#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x, y, k;
    cin >> x >> y >> k;
    if (x == y) {
      cout << (int)(2 * ceil((double)x / k)) << endl;
    } else if (x > y) {
      cout << (int)(2 * ceil((double)y / k) + 2 * floor((double)(x - y) / k) -
                    1)
           << endl;
    } else if (y > x) {
      cout << (int)(2 * ceil((double)x / k) + 2 * ceil((double)(y - x) / k))
           << endl;
    }
  }
}
