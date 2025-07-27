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
    int p[n];
    for (int i = 0; i < n; i++) {
      cin >> p[i];
    }
  }
}
