#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<pair<int, int>> r(n);
    for (int i = 0; i < n; i++) {
      cin >> r[i].first >> r[i].second;
    }
  }
}
