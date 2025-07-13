#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int a[n];
    int maxIndex = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] > a[maxIndex])
        maxIndex = i;
    }

    if (k == 1) {
      long long sum;
      if (maxIndex > 0 && maxIndex < n - 1) {
        sum = a[maxIndex] + max(a[0], a[n - 1]);
        cout << sum << endl;
        continue;
      }
    }

    sort(a, a + n);
    long long sum = 0;
    for (int i = n - k - 1; i < n; i++)
      sum += a[i];
    cout << sum << endl;
  }
}
