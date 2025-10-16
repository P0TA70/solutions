#include <iostream>
#include <vector>

using namespace std;
#define ll long long

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<ll> b(n);
    for (auto &i : b)
      cin >> i;

    vector<ll> a(n);
    a[0] = 1;
    ll next = 2;
    for (int i = 1; i < n; i++) {
      ll delta = b[i] - b[i - 1] - 1;
      ll idash = i - delta - 1;
      if (idash == -1) {
        a[i] = next;
        next++;
      } else {
        a[i] = a[idash];
      }
    }
    for (auto i : a)
      cout << i << ' ';
    cout << '\n';
  }
}
