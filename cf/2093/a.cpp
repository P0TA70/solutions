#include <iostream>
#define ll long long int
using namespace std;

ll twopower(ll n) {
  if (n < 1)
    return 0;
  ll res = 1;
  for (int i = 0; i < 8 * sizeof(ll); i++) {
    ll curr = 1 << i;
    if (curr > n)
      break;
    res = curr;
  }
  return res;
}

ll calculateY(ll y) {
  if (y == 1) {
    return 1;
  } else if (y == 2) {
    return 4;
  }
  ll ya = twopower(y);
  return calculateY(y - ya) + (ya / 2) * (ya / 2) * 12;
}

ll calculateX(ll x, ll base, ll y, ll ya) {
  if (x == 1) {
    return base;
  } else if (x == 2) {
    if (y % 2) {
      return base + 2;
    } else {
      return base - 2;
    }
  }

  ll xa = twopower(x);
  if (xa > ya)
    return calculateX(x - xa, base, y, ya) + xa * xa / 2;
  else
    return calculateX(x - xa, base, y, ya) - xa * xa / 2;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, q;
    cin >> n >> q;
    while (q--) {
      string s;
      cin >> s;
      if (s == "->") {
        // element at x,y
        ll x, y;
        cin >> x >> y;

        ll base = calculateY(y);
        ll ya = twopower(y);

      } else {
        // position of d
        ll d;
        cin >> d;
      }
    }
  }
};
