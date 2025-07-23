#include <iostream>
#include <numeric>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long a, b, k;
    cin >> a >> b >> k;
    if (a == b) {
      cout << 1 << '\n';
    } else if (a <= k && b <= k) {
      cout << "1\n";
    } else if (gcd(a, b) != 1 && (a / gcd(a, b) <= k && b / gcd(a, b) <= k)) {
      cout << "1\n";
    } else {
      cout << "2\n";
    }
  }
}
