#include <iostream>

using namespace std;

#define ll long long

const long long MOD = 1e9 + 7;

void yn(bool a) {
  if (a)
    cout << "yes" << '\n';
  else
    cout << "no" << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    c -= a;
    d -= b;

    int m = min(a, b);
    int M = max(a, b);
    bool ans;
    if (M % 2) {
      if (m >= (M - 1) / 2)
        ans = 1;
      else
        ans = 0;
    } else {
      if (m >= (M / 2 - 1))
        ans = 1;
      else
        ans = 0;
    }

    if (!ans)
      yn(0);
    else {
      int m = min(c, d);
      int M = max(c, d);
      if (M % 2) {
        if (m >= (M - 1) / 2)
          ans = 1;
        else
          ans = 0;
      } else {
        if (m >= (M / 2 - 1))
          ans = 1;
        else
          ans = 0;
      }
      yn(ans);
    }
  }
}
