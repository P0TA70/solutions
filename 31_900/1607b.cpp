#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long x, n;
    cin >> x >> n;
    long long addn;
    if (n % 4 == 0) {
      addn = 0;
    } else if (n % 4 == 1) {
      addn = -n;
    } else if (n % 4 == 2) {
      addn = 1;
    } else if (n % 4 == 3) {
      addn = n + 1;
    }
    x += (x % 2 == 0) ? addn : -addn;
    cout << x << '\n';
  }
}
