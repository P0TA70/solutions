#include <iostream>
#include <ostream>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  if (a[k - 1] <= 0) {
    for (int i = k - 2; i >= 0; i--) {
      if (a[i] > 0) {
        cout << (i + 1) << endl;
        return 0;
      }
    }
    cout << 0 << endl;
    return 0;
  }

  int breakingPoint = n;
  for (int i = k; i < n; i++) {
    if (a[i] != a[k - 1]) {
      breakingPoint = i;
      break;
    }
  }
  cout << breakingPoint << endl;
}
