#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    int first = a[0] % 2;
    bool failed=0;
    for (int i=1;i<n;i++) {
      if (i%2!=0 && a[i]%2 == first) {
        failed=1;
      } else if (i%2==0 && a[i]%2 !=first) {
        failed=1;
      }
      if (failed) break;
    }
    if (!failed) {
      cout << "yes\n";
    } else {
      cout << "no\n";
    }
  }
}
