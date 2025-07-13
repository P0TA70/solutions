#include <iostream>
#include <set>
#include <string>
#include <utility>

using namespace std;

void permute(string s, int n, int index, set<string> &ans) {
  if (index == n) {
    ans.insert(s);
    return;
  }

  for (int i = index; i < n; i++) {
    string temp = s;
    swap(temp[index], temp[i]);
    permute(temp, n, index + 1, ans);
  }
}

int main() {
  string s;
  cin >> s;
  int n = s.length();

  set<string> ans;
  permute(s, n, 0, ans);
  cout << ans.size() << endl;
  for (auto i : ans) {
    cout << i << endl;
  }
}
