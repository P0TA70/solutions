#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> b(n);
    int x = 1;
    for (int i = 0; i < n; i++) {
      cin >> b[i];
      if (i != 0 && b[i] % b[i - 1] != 0) {
        x = lcm(x, b[i - 1] / gcd(b[i], b[i - 1]));
      }
    }
    cout << x << '\n';
  }
}
