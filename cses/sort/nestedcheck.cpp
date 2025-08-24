#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<tuple<int, int, int>> v(n);

  multiset<int> a;
  multiset<int> b;

  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    v[i] = {x, y, i};
    a.insert(y);
    b.insert(y);
  }
  sort(v.begin(), v.end(), [](auto a, auto b) {
    auto [a1, a2, a3] = a;
    auto [b1, b2, b3] = b;
    if (a1 != b1)
      return a1 < b1;
    else
      return a2 > b2;
  }); // sorts tuple in ascending of first but descending of second as fallback

  bool ans1[n]; // ans
  for (auto i : v) {
    auto [x, y, index] = i;
    auto it = a.find(y);
    a.erase(it);

    if (a.empty()) {
      ans1[index] = 0;
      break;
    }

    if (*a.begin() <= y) {
      ans1[index] = 1;
    } else {
      ans1[index] = 0;
    }
  }

  bool ans2[n];
  for (int i = n - 1; i >= 0; i--) {
    auto [x, y, index] = v[i];
    auto it = b.find(y);
    b.erase(it);

    if (b.empty()) {
      ans2[index] = 0;
      break;
    }

    if (*prev(b.end()) >= y) {
      ans2[index] = 1;
    } else {
      ans2[index] = 0;
    }
  }

  for (auto i : ans1) {
    cout << i << ' ';
  }
  cout << '\n';
  for (auto i : ans2) {
    cout << i << ' ';
  }
}
