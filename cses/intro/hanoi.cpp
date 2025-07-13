#include <iostream>
#include <vector>

using namespace std;
void solve(int n, int prev, int adj, int next, vector<vector<int>> &v) {
  if (n == 0)
    return;

  solve(n - 1, prev, next, adj, v);
  v.push_back({prev, next});
  solve(n - 1, adj, prev, next, v);
}

int main() {
  int n;
  cin >> n;
  vector<vector<int>> v;
  solve(n, 1, 2, 3, v);

  cout << v.size() << endl;
  for (auto i : v) {
    for (auto j : i) {
      cout << j << " ";
    }
    cout << endl;
  }
}
