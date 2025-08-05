#include <climits>
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
    int n;
    cin >> n;
    int p[n];
    int m = 0;
    bool m_found = 0;
    bool ans_found = 0;
    int M = 0;
    int ans[3] = {-1, -1, -1};
    for (int i = 0; i < n; i++) {
      cin >> p[i];
      if (!m_found) {
        if (p[i] <= p[m]) {
          m = i;
        } else {
          M = i;
          m_found = 1;
        }
      }
      if (m_found && !ans_found) {
        if (p[i] >= p[M]) {
          M = i;
        } else {
          ans_found = 1;
          ans[0] = m + 1;
          ans[1] = M + 1;
          ans[2] = i + 1;
        }
      }
    }
    if (ans_found) {
      yn(1);
      cout << ans[0] << ' ' << ans[1] << ' ' << ans[2] << '\n';
    } else {
      yn(0);
    }
  }
}
