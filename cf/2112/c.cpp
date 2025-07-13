#include <algorithm>
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
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    long long count = 0;
    for (int i = 0; i < n - 2; i++) {
      for (int j = i + 1; j < n - 1; j++) {
        int l = a[n - 1] - a[j] - a[i];
        int u = a[i] + a[j];
        vector<int>::iterator li = upper_bound(a.begin() + j + 1, a.end(), l);

        vector<int>::iterator ui = lower_bound(a.begin() + j + 1, a.end(), u);
        count += (ui - li > 0) ? ui - li : 0;
      }
    }
    cout << count << '\n';
  }
}
