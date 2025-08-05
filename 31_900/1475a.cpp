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
    ll n;
    cin >> n;
    if ((n & (n - 1)) == 0) {
      yn(0);
    } else {
      yn(1);
    }
  }
}
