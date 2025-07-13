#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int b[m];
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }

  sort(a, a + n);
  sort(b, b + m);

  int i1 = 0;
  int i2 = 0;

  int count = 0;

  while (i1 < n && i2 < m) {
    if (abs(a[i1] - b[i2]) <= k) {
      count++;
      i1++;
      i2++;
    } else if (a[i1] > b[i2]) {
      i2++;
    } else {
      i1++;
    }
  }

  cout << count;
}
