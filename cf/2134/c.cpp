#include <iostream>

using namespace std;

#define ll long long

const long long MOD = 1e9 + 7;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    ll cost = 0;
    for (int i = 1; i < n; i += 2) {
      if (a[i - 1] > a[i]) {
        cost += a[i - 1] - a[i];
        a[i - 1] = a[i];
      }
      if (i < n - 1 && a[i + 1] > a[i]) {
        cost += a[i + 1] - a[i];
        a[i + 1] = a[i];
      }
      if (i < n - 1 && a[i + 1] + a[i - 1] > a[i]) {
        cost += a[i + 1] + a[i - 1] - a[i];
        a[i + 1] = a[i] - a[i - 1];
      }
    }
    cout << cost << '\n';
  }
}
