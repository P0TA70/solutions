#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main() {
  int x, n;
  cin >> x >> n;
  vector<int> p(n);
  map<int, int> m;
  set<int> s;
  for (int i = 0; i < n; i++) {
    cin >> p[i];
    s.insert(p[i]);
  }
}
