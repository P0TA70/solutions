#include <iostream>
#include <vector>

using namespace std;

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
    int nk;
    cin >> nk;
    if (nk == 0) {
      yn(1);
      continue;
    }
    if ((nk & (nk - 1)) == 0) {
      yn(0);
      continue;
    }

    vector<bool> n;
    while (nk % 2 == 0)
      nk /= 2;
    while (nk) {
      n.push_back(nk % 2);
      nk /= 2;
    }
    int l = 0;
    int h = n.size() - 1;
    bool ans = 1;
    while (l < h) {
      if (n[l] != n[h]) {
        ans = 0;
        break;
      }
      l++;
      h--;
    }
    if (l == h && n[l] == 1)
      ans = 0;
    yn(ans);
  }
}
