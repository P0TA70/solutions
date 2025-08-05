#include <iostream>

using namespace std;

#define ll long long

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    int ans = -1;
    for (auto &i : a) {
      cin >> i;
      if (ans == -1) {
        ans = i;
      } else {
        ans &= i;
      }
    }
    cout << ans << '\n';
  }
}
