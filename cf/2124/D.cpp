#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    if (k == 1) {
      cout << "yes" << '\n';
      continue;
    }

    int i = 0;
    int j = n - 1;

    while (i < j) {
      if (a[i] != a[j]) {

      } else {
        i++;
        j--;
      }
    }
  }
}
