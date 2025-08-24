#include <iostream>
#include <iterator>
#include <set>
#include <vector>

using namespace std;

int main() {
  int x, n;
  cin >> x >> n;
  vector<int> p(n);

  set<int> pos = {0, x};
  multiset<int> gap = {x};

  for (int i = 0; i < n; i++) {
    cin >> p[i];

    auto it = pos.insert(p[i]).first;
    auto prev = std::prev(it);
    auto next = std::next(it);
    auto it2 = gap.find(*next - *prev);
    gap.erase(it2);
    gap.insert(*next - *it);
    gap.insert(*it - *prev);
    cout << *std::prev(gap.end()) << '\n';
  }
}
