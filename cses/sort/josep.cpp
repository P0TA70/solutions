#include <iostream>
#include <iterator>
#include <set>

using namespace std;

int main() {
  int n;
  cin >> n;

  if (n == 1) {
    cout << 1 << ' ';
    return 0;
  }

  set<int> a;
  for (int i = 0; i < n; ++i)
    a.insert(a.end(), i + 1);

  auto curr = next(a.begin());
  while (!a.empty()) {
    cout << *curr << ' ';
    auto temp = curr;
    auto last = prev(a.end());

    if (curr == last) {
      curr = next(a.begin());
      if (curr == last) {
        curr = a.begin();
      }
    } else if (curr == prev(last)) {
      curr = a.begin();
      if (curr == prev(last)) {
        curr = last;
      }
    } else {
      curr = next(next(curr));
    }
    a.erase(temp);
  }
}
