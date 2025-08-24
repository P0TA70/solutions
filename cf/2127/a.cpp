#include <iostream>

using namespace std;

#define ll long long

void yn(bool b) {
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
    int a[n];
    bool failed = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] == 0) {
        failed = 1;
      }
      if (!failed && i >= 2) {
        if (a[i - 2] != a[i - 1] && a[i - 1] != a[i] && a[i - 2] != a[i]) {
          failed = 1;
        } else {
          if (a[i] == a[i - 1] && a[i - 1] == a[i - 2])
            continue;
          if (a[i] != -1 && a[i - 1] != -1 && a[i - 2] != -1) {
            failed = 1;
          } else {
            if (a[i] == -1) {
              a[i] = max(a[i - 1], a[i - 2]);
            }
            if (a[i - 1] == -1) {
              a[i - 1] = max(a[i], a[i - 2]);
            }
            if (a[i - 2] == -1) {
              a[i - 2] = max(a[i], a[i - 1]);
            }
          }
        }
      }
    }
    yn(!failed);
  }
}
