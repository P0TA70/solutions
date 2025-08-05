#include <algorithm>
#include <climits>
#include <iostream>

using namespace std;

#define ll long long

int solve(string &s, string sub) {
  int l = 0;
  while (s[l] != sub[1] && l < s.size()) {
    l++;
  }
  if (l == s.size()) {
    return INT_MAX;
  }
  int h = l + 1;
  while (s[h] != sub[0] && h < s.size()) {
    h++;
  }
  if (h == s.size()) {
    return INT_MAX;
  }
  return (h - l - 1) + l;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string n;
    cin >> n;
    reverse(n.begin(), n.end());
    string subs[4] = {"00", "25", "50", "75"};

    int m = INT_MAX;
    for (auto i : subs) {
      m = min(m, solve(n, i));
    }

    cout << m << '\n';
  }
}
