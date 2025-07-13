#include <iostream>
#include <map>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  int a[n];
  map<int, int> m;
  bool found = 0;
  pair<int, int> ans;

  for (int i = 0; i < n; i++) {
    cin >> a[i];

    if (!found && m.find(x - a[i]) != m.end()) {
      found = 1;
      ans.first = m[x - a[i]] + 1;
      ans.second = i + 1;
    }

    m[a[i]] = i;
  }
  if (found)
    cout << ans.first << " " << ans.second << endl;
  else
    cout << "IMPOSSIBLE" << endl;
}
