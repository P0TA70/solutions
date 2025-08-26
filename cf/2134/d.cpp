#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

#define ll long long

const long long MOD = 1e9 + 7;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (n == 1 || n == 2) {
      cout << -1 << '\n';
      continue;
    }
    multimap<int, int> edges;
    map<int, int> degree;
    for (int i = 0; i < n - 1; i++) {
      int a, b;
      cin >> a >> b;
      edges.insert({a, b});
      degree[a]++;
      degree[b]++;
    }
    sort(edges.begin(), edges.end());
  }
}
