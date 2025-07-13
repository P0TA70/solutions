#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;

  map<char, int> m;

  for (auto i : s) {
    if (m.find(i) == m.end()) {
      m.insert({i, 1});
    } else {
      m[i]++;
    }
  }

  string ans;
  int noofodd = 0;
  char odd;

  for (auto i : m) {
    if (i.second % 2 != 0) {
      if (noofodd) {
        cout << "NO SOLUTION" << endl;
        return 0;
      }
      noofodd = i.second;
      odd = i.first;
    } else {
      for (int j = 0; j < i.second / 2; j++)
        ans.push_back(i.first);
    }
  }
  int temp = noofodd;
  while (noofodd--) {
    ans.push_back(odd);
  }

  for (int i = ans.length() - temp - 1; i >= 0; i--) {
    ans.push_back(ans[i]);
  }

  cout << ans << endl;
}
