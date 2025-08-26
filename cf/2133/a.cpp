#include <algorithm>
#include <iostream>

using namespace std;

#define ll long long

const long long MOD = 1e9 + 7;

void yn(bool a) {
  if (a)
    cout << "yes" << '\n';
  else
    cout << "no" << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a, a + n);
    bool b = 0;
    for (int i = 1; i < n; i++) {
      if (a[i] == a[i - 1]) {
        b = 1;
        break;
      }
    }
    yn(b);
  }
}
