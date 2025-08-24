#include <algorithm>
#include <iostream>
using namespace std;

long long p = 1000000007;

int main() {
  int n;
  cin >> n;
  int k[n];

  for (int i = 0; i < n; i++) {
    cin >> k[i];
  }
  sort(k, k + n); // subsequences are essentially just combinations of indices.
                  // so the order does not matter
  long long ans = 0;
  int f = 1;
  for (int i = 0; i < n; i++) {
    if (i == n - 1 || k[i] != k[i + 1]) {
      ans = (ans + ans * f + f) % p;
      f = 1;
    } else {
      f++;
    }
  }
  cout << ans;
}
