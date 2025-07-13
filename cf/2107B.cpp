#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;

    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i];
    }

    sort(a, a + n);

    if (a[n - 1] - a[0] > k + 1) {
      cout << "Jerry" << endl;
    } else {
      if (a[n - 1] - a[0] == k + 1) {
      } else {
      }
    }
  }
}
