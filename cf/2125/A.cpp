#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    string ans;
    int T = 0;
    int n = 0;
    int f = 0;
    for (auto i : s) {
      if (i == 'T') {
        T++;
      } else if (i == 'N') {
        n++;
      } else if (i == 'F') {
        f++;
      } else {
        ans.push_back(i);
      }
    }
    while (T--) {
      ans.push_back('T');
    }
    while (n--) {
      ans.push_back('N');
    }
    while (f--) {
      ans.push_back('F');
    }
    cout << ans << '\n';
  }
}
