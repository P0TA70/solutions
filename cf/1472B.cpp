#include <iostream>
#include <ostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    int weightSum = 0;
    int nOf2 = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      weightSum += a[i];
      if (a[i] == 2)
        nOf2++;
    }
    if (weightSum % 2) {
      cout << "NO" << endl;
    } else {
      if (!(nOf2 % 2)) {
        cout << "YES" << endl;
      } else {
        if (nOf2 == n)
          cout << "NO" << endl;
        else
          cout << "YES" << endl;
      }
    }
  }
}
