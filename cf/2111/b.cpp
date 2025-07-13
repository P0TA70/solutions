#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;

    int f[n];
    f[0] = 1;
    f[1] = 2;
    for (int i = 2; i < n; i++) {
      f[i] = f[i - 1] + f[i - 2];
    }

    int w[m], l[m], h[m];

    string ans;
    for (int i = 0; i < m; i++) {
      cin >> w[i] >> l[i] >> h[i];
      if (w[i] >= f[n - 1] && l[i] >= f[n - 1] && h[i] >= f[n - 1]) {
        if (w[i] >= f[n - 1] + f[n - 2] || l[i] >= f[n - 1] + f[n - 2] ||
            h[i] >= f[n - 1] + f[n - 2]) {
          ans.append("1");
        } else {
          ans.append("0");
        }
      } else {
        ans.append("0");
      }
    }
    cout << ans << endl;
  }
}
