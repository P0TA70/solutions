#include <iostream>
#include <map>
#include <vector>

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
    vector<int> a(n);
    map<int, int> m;
    int x = 0;
    for (auto &i : a) {
      cin >> i;
      auto &mi = m[i];
      mi++;
      x = max(x, mi);
    }
    int clones = 0;
    int swaps = 0;
    int covered = x;
    while (covered < n) {
      clones++;
      swaps += min(n - covered, covered);
      covered *= 2;
    }
    cout << clones + swaps << '\n';
  }
}
