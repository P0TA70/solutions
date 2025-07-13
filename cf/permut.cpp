#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  int p;
  cin >> p;
  while (p--) {
    int n;
    cin >> n;
    vector<int> perm(n, 0);
    for (int i = 0; i < n; i++) {
      cin >> perm[i];
    }

    vector<int> diff;
    for (int i = 0; i < n; i++) {
      int num = abs(i - perm[i] + 1);
      if (num) {
        diff.push_back(num);
      }
    }

    int ans = diff[0];
    for (int i = 1; i < diff.size(); i++) {
      ans = gcd(ans, diff[i]);
    }
    cout << ans << endl;
  }
  return 0;
}
