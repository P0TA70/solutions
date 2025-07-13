#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int ans = 3 * (n / 15);
    if (n % 15 == 0) {
      ans += 1;
    } else if (n % 15 == 1) {
      ans += 2;
    } else {
      ans += 3;
    }
    cout << ans << endl;
  }
}
