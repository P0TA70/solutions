#include <iostream>

using namespace std;

#define ll long long

const long long MOD = 1e9 + 7;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, rk, ck, rd, cd;
    cin >> n >> rk >> ck >> rd >> cd;
    int dirr = (rk == rd) ? 0 : (rk - rd) / abs(rk - rd);
    int dirc = (ck == cd) ? 0 : (ck - cd) / abs(ck - cd);
    int r = n, c = n;
    if (dirr == -1)
      r = 0;
    if (dirc == -1)
      c = 0;
    int ans = max(abs(rd - r), abs(cd - c));
    if (dirr == 0)
      ans = abs(cd - c);
    if (dirc == 0)
      ans = abs(rd - r);
    cout << ans << '\n';
  }
}
