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
    ll a[n];
    for (auto &i : a) {
      cin >> i;
    }
    int count = 0;
    for (int i = n - 2; i >= 0; i--) {
      while (a[i] >= a[i + 1]) {
        a[i] /= 2;
        count++;
        if (a[i] == 0) {
          break;
        }
      }
      if (a[i] == a[i + 1]) {
        count = -1;
        break;
      }
    }
    cout << count << '\n';
  }
}
