#include <iostream>

using namespace std;

#define ll long long

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m, i, j;
    cin >> n >> m >> i >> j;
    if (i == 1 || i == n) {
      cout << n - i + 1 << ' ' << 1 << ' ' << n - i + 1 << ' ' << m << '\n';
    } else if (j == 1 || j == m) {
      cout << 1 << ' ' << m - j + 1 << ' ' << n << ' ' << m - j + 1 << '\n';
    } else {
      cout << 1 << ' ' << 1 << ' ' << n << ' ' << m << '\n';
    }
  }
}
