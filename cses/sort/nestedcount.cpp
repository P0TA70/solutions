#include <algorithm>
#include <iostream>
#include <vector>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag,
                              tree_order_statistics_node_update>;

int main() {
  int n;
  cin >> n;

  vector<tuple<int, int, int>> v(n);

  ordered_multiset<int> a;
  ordered_multiset<int> b;

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

  int ans1[n]; // ans
  for (auto i : v) {
    auto [x, y, index] = i;
    a.erase(a.find_by_order(a.order_of_key(y)));

    if (a.empty()) {
      ans1[index] = 0;
      break;
    }

    if (*a.begin() <= y) {
      ans1[index] = a.order_of_key(y + 1);
    } else {
      ans1[index] = 0;
    }
  }

  int ans2[n];
  for (int i = n - 1; i >= 0; i--) {
    auto [x, y, index] = v[i];
    b.erase(b.find_by_order(b.order_of_key(y)));

    if (b.empty()) {
      ans2[index] = 0;
      break;
    }

    if (*prev(b.end()) >= y) {
      ans2[index] = b.size() - b.order_of_key(y);
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
