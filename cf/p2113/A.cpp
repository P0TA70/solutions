#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;

    int l_requirement;
    int l;
    int h_requirement;
    int h;

    if (x >= y) {
      l_requirement = b;
      l = y;
      h_requirement = a;
      h = x;
    } else {
      l_requirement = a;
      h_requirement = b;
      l = x;
      h = y;
    }

    int c1 = ceil((float)(k - l_requirement) / l);
    if (c1 == (k - l_requirement) / l) {
      c1++;
    }
    if (k < l_requirement) {
      c1 = 0;
    }

    int kn = k - c1 * l;
    int c2 = ceil((float)(kn - h_requirement) / h);
    if (c2 == (kn - h_requirement) / h) {
      c2++;
    }

    if (kn < h_requirement) {
      c2 = 0;
    }

    cout << c1 + c2 << '\n';
  }
}
