#include <cmath>
#include <iostream>

using namespace std;

#define ll long long

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int a[n * k];
    for (auto &i : a) {
      cin >> i;
    }
    int interval = ceil((float)(n + 1) / 2);
    int index = n * k - interval;
    ll sum = 0;
    while (k--) {
      sum += a[index];
      index -= interval;
    }
    cout << sum << '\n';
  }
}
