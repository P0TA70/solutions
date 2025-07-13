#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    int a[n];
    bool yes = 0;
    int smaller_than_k = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] <= k) {
        smaller_than_k++;
        if (smaller_than_k >= (i + 2) / 2) {
          yes = 1;
        }
      }
    }

    if (yes) {
      cout << "yes" << endl;
    } else {
    }
  }
}
