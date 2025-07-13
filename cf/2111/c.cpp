#include <algorithm>
#include <climits>
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    int a[n];
    int l = 0;
    int h = 0;
    unsigned long long minCost = ULONG_LONG_MAX;
    for (int i = 0; i < n; i++) {
      cin >> a[i];

      if (i != 0 && a[i] == a[i - 1]) {
        h++;
      } else if (i != 0 && a[i] != a[i - 1]) {
        unsigned long long cost = (unsigned long long)(n - 1 - (h - l)) * a[h];
        minCost = min(minCost, cost);
        l = i;
        h = i;
      }
    }
    unsigned long long cost = (unsigned long long)(n - 1 - (h - l)) * a[h];
    minCost = min(minCost, cost);

    if (minCost == INT_MAX) {
      minCost = 0;
    }
    cout << minCost << endl;
  }
}
