#include <iostream>
#include <map>

using namespace std;

void ans(bool b) {
  if (b) {
    cout << "yes\n";
  } else {
    cout << "no\n";
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    map<char, int> m;
    for (auto i : s) {
      m[i]++;
    }

    int odd = 0;

    for (auto i : m) {
      if (i.second % 2) {
        odd++;
      }
    }

    if (k < odd - 1) {
      ans(0);
    } else {
      ans(1);
    }
  }
}
