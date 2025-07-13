#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    int a[m];
    int numberOfBig = 0;
    for (int i = 0; i < m; i++) {
      cin >> a[i];
      if (a[i] >= n)
        numberOfBig++;
    }

    sort(a, a + m);

    // big+big
    int total = (n - 1) * (numberOfBig) * (numberOfBig - 1);
    // each small + all big
    for (int i = 0; i < m - numberOfBig; i++) {
      total += 2 * a[i] * (numberOfBig);
    }

    for (int i = 0; i < m - numberOfBig; i++) {
      for (int j = m - numberOfBig - 1; a[j] >= n - a[i] && j >= i + 1; j--) {
        total += (a[i] - (n - a[j]) + 1) * 2;
      }
    }

    cout << total << endl;
  }
}
