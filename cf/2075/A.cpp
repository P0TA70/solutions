#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    if (n % 2 == 0) {
      int p = n / (k - 1);
      if ((k - 1) * p < n)
        p++;
      cout << p << endl;
    } else {
      int p = (n - k) / (k - 1);
      if ((k - 1) * p < n - k)
        p++;
      cout << p + 1 << endl;
    }
  }
}
