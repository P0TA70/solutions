#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    int operations = 2 * n;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] == 1) {
        a[i]++;
        operations--;
      }
    }
    for (int i = 1; i < n; i++) {
      if (a[i] % a[i - 1] == 0) {
        a[i]++;
        operations--;
      }
    }
    for (auto i : a) {
      cout << i << '\n';
    }
  }
}
