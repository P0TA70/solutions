#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <iostream>

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using ordered_set =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
  int n, k;
  cin >> n >> k;

  if (n == 1) {
    cout << 1 << ' ';
    return 0;
  }

  ordered_set<int> o;
  for (int i = 0; i < n; i++) {
    o.insert(i + 1);
  }

  int index = k;

  while (!o.empty()) {
    index %= o.size();

    auto it = o.find_by_order(index);
    cout << *it << ' ';
    o.erase(it);

    index += k;
  }
}
