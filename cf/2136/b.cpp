#include <iostream>
#include <vector>

using namespace std;

#define ll long long

const long long MOD = 1e9 + 7;

void yn(bool a) {
  if (a)
    cout << "yes" << '\n';
  else
    cout << "no" << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int count = 0;
    bool failed = 0;
    for (auto i : s) {
      if (i == '1') {
        count++;
      } else {
        count = 0;
      }
      if (count >= k) {
        failed = 1;
        break;
      }
    }
    if (failed) {
      yn(0);
      continue;
    }
    yn(1);

    vector<int> p(n, 0);
    int current = n;

    for (int i = 0; i < n; i++) {
      if (s[i] == '0') {
        p[i] = current;
        current--;
      }
    }
    for (int i = 0; i < n; i++) {
      if (s[i] == '1') {
        p[i] = current;
        current--;
      }
    }
    for (auto i : p)
      cout << i << ' ';
    cout << '\n';
  }
}
