#include <algorithm>
#include <iostream>

using namespace std;

#define ll long long

void yn(bool b) {
  if (b) {
    cout << "yes\n";
  } else {
    cout << "no\n";
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll a, b;
    cin >> a >> b;
    ll max_e = abs(b - a);
    ll min_cost = (max_e == 0 || max_e == 1)
                      ? 0
                      : min(max_e - ((min(a, b)) % max_e), min(a, b) % max_e);
    if (min(a, b) == 0)
      min_cost = 0;
    cout << max_e << ' ' << min_cost << '\n';
  }
}
