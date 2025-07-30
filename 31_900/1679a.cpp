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
    ll n;
    cin >> n;
    if (n % 2 != 0 || n < 4) {
      cout << -1 << '\n';
      continue;
    }
    ll x, y;
    if (n % 6 == 0) {
      x = n / 6;
    } else {
      x = n / 6 + 1;
    }
    y = n / 4;

    cout << x << ' ' << y << endl;
  }
}
