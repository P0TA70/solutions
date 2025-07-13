#include <iostream>

using namespace std;

int main() {
  int p;
  cin >> p;
  while (p--) {
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int b[n];
    for (int i = 0; i < m; i++) {
      cin >> b[i];
    }

    int isBad = 0;

    if (a[1] < a[0]) {
      if (b[0] - a[0] <= a[1]) {
        a[0] = b[0] - a[0];
      } else if (b[0] - a[0] <= a[1]) {
        isBad = 1;
      } else {
        a[0] = b[0] - a[0];
      }
    }

    for (int i = 2; i < n && !isBad; i++) {
      if (a[i] < a[i - 1]) {
        if (b[0] - a[i - 1] <= a[i] && !(a[i - 2] > b[0] - a[i - 1])) {
          a[i - 1] = b[0] - a[i - 1];
        } else if (b[0] - a[i - 1] <= a[i] && a[i - 2] > b[0] - a[i - 1]) {
          isBad = 1;
        } else {
          a[i] = b[0] - a[i];
        }
      }
    }

    if (isBad) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
}
