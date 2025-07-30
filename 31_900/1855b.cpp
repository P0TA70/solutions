#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    int i;
    for (i = 2; i < n; i++) {
      if (n % i != 0) {
        break;
      }
    }
    if (n == 2)
      i = 2;
    if (n == 1) {
      i = 1;
    }
    cout << i - 1 << '\n';
  }
}
