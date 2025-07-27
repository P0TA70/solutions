#include <climits>
#include <iostream>

using namespace std;

void ans(bool b) {
  if (b) {
    cout << "yes\n";
  } else {
    cout << "no\n";
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int b[n];
    int min = INT_MAX;
    bool y = 1;
    for (int i = 0; i < n; i++) {
      cin >> b[i];
      if (b[i] < min) {
        min = b[i];
      }
      if (b[i] >= 2 * min) {
        y = 0;
      }
    }

    ans(y);
  }
}
