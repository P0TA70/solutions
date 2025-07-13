#include <algorithm>
#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

ll solve(vector<int> &p, int index, int n, ll sum1, ll sum2) {
  if (index == n)
    return abs(sum1 - sum2);

  ll chooseSum1 = solve(p, index + 1, n, sum1 + p[index], sum2);
  ll chooseSum2 = solve(p, index + 1, n, sum1, sum2 + p[index]);

  return min(chooseSum1, chooseSum2);
}

int main() {
  int n;
  cin >> n;
  vector<int> p;
  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;
    p.push_back(k);
  }

  ll ans = solve(p, 0, n, 0, 0);
  cout << ans;
}
