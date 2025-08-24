#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  int k[n];

  map<int, int> m;
  vector<long long> a;
  int current_start = 0;

  long long sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> k[i];

    auto it = m.find(k[i]);
    if (it == m.end()) {
      m[k[i]] = i;
    } else {
      a.push_back(i - current_start);
      sum += a.back() * (a.back() + 1) / 2;

      current_start = max(current_start, it->second + 1);

      long long l = i - current_start;
      sum -= l * (l + 1) / 2;

      it->second = i;
    }
  }
  a.push_back(n - current_start);
  sum += a.back() * (a.back() + 1) / 2;

  cout << sum << '\n';
}
