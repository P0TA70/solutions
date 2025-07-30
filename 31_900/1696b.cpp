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
    for (auto &i : a) {
      cin >> i;
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
      if (i != n - 1 && a[i] == 0 && a[i + 1] != 0) {
        count++;
      }
    }
    if (a[0] != 0)
      count++;
    if (count > 2) {
      count = 2;
    }
    cout << count << endl;
  }
}
