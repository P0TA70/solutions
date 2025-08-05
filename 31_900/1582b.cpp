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
    ll count = 0;
    for (auto &i : a) {
      cin >> i;
      if (i == 1) {
        count++;
      }
    }
    for (auto i : a) {
      if (i == 0)
        count *= 2;
    }
    cout << count << '\n';
  }
}
