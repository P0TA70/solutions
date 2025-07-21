#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int w, h, a, b;
    cin >> w >> h >> a >> b;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    bool above = 0; // both are talking about box 1
    bool leftward = 0;

    if (y1 >= y2 + b) {
      above = 1;
    }
    if (x1 + a <= x2) {
      leftward = 1;
    }

    int vertical_dist;
    int horizontal_dist;

    if (above) {
      vertical_dist = y1 - y2 - b;
    } else {
      vertical_dist = y2 - y1 - b;
    }

    if (leftward) {
      horizontal_dist = x2 - x1 - a;
    } else {
      horizontal_dist = x1 - x2 - a;
    }

    if ((x1 - x2) % a == 0 || (y1 - y2) % b == 0) {
      cout << "yes\n";
    } else {
      cout << "no\n";
    }
  }
}
