#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  int p[n];
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }

  sort(p, p + n);

  int l = 0;
  int h = n - 1;
  int cnt = 0;
  while (l <= h) {
    if (p[h] + p[l] > x) {
      h--;
      cnt++;
    } else {
      cnt++;
      l++;
      h--;
    }
  }
  cout << cnt << endl;
}
