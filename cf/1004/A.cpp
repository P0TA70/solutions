#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
  int p;
  cin >> p;

  while (p--) {
    int x, y;
    cin >> x >> y;
    if (y - x == 1) {
      cout << "yes" << endl;
    } else if (!((x - y + 1) % 9) && x >= y) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }
}
