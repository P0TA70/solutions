#include <iostream>

using namespace std;

#define ll long long

const long long MOD = 1e9 + 7;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x, y;
    cin >> x >> y;
    if (y > x)
      cout << 2 << '\n';
    else {
      if (y > 1 && x - 1 > y)
        cout << 3 << '\n';
      else
        cout << -1 << '\n';
    }
  }
}
