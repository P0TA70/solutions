#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n), d(n);
    long long cost = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i] >> b[i] >> c[i] >> d[i];
      cost += (a[i] > c[i]) ? (a[i] - c[i]) : 0; // handle 0's instantly
      if (b[i] > d[i]) {
        if (a[i] < c[i])
          cost += a[i] + b[i] - d[i];
        else
          cost += (c[i] + b[i] - d[i]);
      }
    }

    cout << cost << '\n';
  }
}
