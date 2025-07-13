#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    int neven = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] % 2 == 0) {
        neven++;
      }
    }
    int points = 0;
    if (neven == 1) {
      points = n;
    } else if (neven == 0) {
      points = n - 1;
    } else {
      points = n - neven + 1;
    }
    cout << points << endl;
  }
}
