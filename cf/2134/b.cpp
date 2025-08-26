#include <iostream>

using namespace std;

#define ll long long

const long long MOD = 1e9 + 7;

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    if (k % 2 != 0) {
      // if k is odd, make all odd numbers even
      for (auto i : a) {
        if (i % 2) {
          cout << i + k << ' ';
        } else {
          cout << i << ' ';
        }
      }
      cout << '\n';
    } else {
      for (auto i : a) {
        cout << i + (i % (k + 1)) * k << ' ';
      }
      cout << '\n';
    }
  }
}
