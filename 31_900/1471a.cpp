#include <cmath>
#include <iostream>

using namespace std;

#define ll long long

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    int a[n];
    ll sum = 0;
    ll dsum = 0;
    for (auto &i : a) {
      cin >> i;
      sum += i;
      dsum += ceil((double)i / x);
    }
    sum = ceil((double)sum / x);

    cout << sum << ' ' << dsum << '\n';
  }
}
